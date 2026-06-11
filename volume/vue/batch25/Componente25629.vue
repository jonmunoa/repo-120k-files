<template>
  <section class="panel-25629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25629");
const base = ref(25629);
const total = computed(() => base.value * 2);

function incrementar25629() {
  base.value++;
}
</script>
