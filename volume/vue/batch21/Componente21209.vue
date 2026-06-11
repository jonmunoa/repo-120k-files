<template>
  <section class="panel-21209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21209");
const base = ref(21209);
const total = computed(() => base.value * 2);

function incrementar21209() {
  base.value++;
}
</script>
