<template>
  <section class="panel-14629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14629");
const base = ref(14629);
const total = computed(() => base.value * 2);

function incrementar14629() {
  base.value++;
}
</script>
