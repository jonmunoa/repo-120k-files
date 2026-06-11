<template>
  <section class="panel-29469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29469");
const base = ref(29469);
const total = computed(() => base.value * 2);

function incrementar29469() {
  base.value++;
}
</script>
