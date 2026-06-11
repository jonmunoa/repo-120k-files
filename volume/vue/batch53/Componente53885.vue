<template>
  <section class="panel-53885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53885");
const base = ref(53885);
const total = computed(() => base.value * 2);

function incrementar53885() {
  base.value++;
}
</script>
