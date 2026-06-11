<template>
  <section class="panel-34313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34313");
const base = ref(34313);
const total = computed(() => base.value * 2);

function incrementar34313() {
  base.value++;
}
</script>
