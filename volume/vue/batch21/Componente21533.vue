<template>
  <section class="panel-21533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21533");
const base = ref(21533);
const total = computed(() => base.value * 2);

function incrementar21533() {
  base.value++;
}
</script>
