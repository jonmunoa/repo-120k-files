<template>
  <section class="panel-32977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32977");
const base = ref(32977);
const total = computed(() => base.value * 2);

function incrementar32977() {
  base.value++;
}
</script>
