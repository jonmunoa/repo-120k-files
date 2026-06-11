<template>
  <section class="panel-27313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27313");
const base = ref(27313);
const total = computed(() => base.value * 2);

function incrementar27313() {
  base.value++;
}
</script>
