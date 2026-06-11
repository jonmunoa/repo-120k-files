<template>
  <section class="panel-5313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5313");
const base = ref(5313);
const total = computed(() => base.value * 2);

function incrementar5313() {
  base.value++;
}
</script>
