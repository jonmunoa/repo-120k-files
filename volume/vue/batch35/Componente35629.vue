<template>
  <section class="panel-35629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35629");
const base = ref(35629);
const total = computed(() => base.value * 2);

function incrementar35629() {
  base.value++;
}
</script>
