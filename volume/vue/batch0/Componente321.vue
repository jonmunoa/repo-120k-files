<template>
  <section class="panel-321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 321");
const base = ref(321);
const total = computed(() => base.value * 2);

function incrementar321() {
  base.value++;
}
</script>
