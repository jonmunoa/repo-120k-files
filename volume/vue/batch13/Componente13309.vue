<template>
  <section class="panel-13309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13309");
const base = ref(13309);
const total = computed(() => base.value * 2);

function incrementar13309() {
  base.value++;
}
</script>
