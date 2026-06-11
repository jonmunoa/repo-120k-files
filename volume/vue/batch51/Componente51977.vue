<template>
  <section class="panel-51977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51977");
const base = ref(51977);
const total = computed(() => base.value * 2);

function incrementar51977() {
  base.value++;
}
</script>
