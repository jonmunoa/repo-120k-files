<template>
  <section class="panel-56977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56977");
const base = ref(56977);
const total = computed(() => base.value * 2);

function incrementar56977() {
  base.value++;
}
</script>
