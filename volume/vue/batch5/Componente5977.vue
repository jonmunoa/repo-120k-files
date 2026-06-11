<template>
  <section class="panel-5977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5977");
const base = ref(5977);
const total = computed(() => base.value * 2);

function incrementar5977() {
  base.value++;
}
</script>
