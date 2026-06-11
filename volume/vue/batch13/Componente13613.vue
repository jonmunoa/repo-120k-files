<template>
  <section class="panel-13613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13613");
const base = ref(13613);
const total = computed(() => base.value * 2);

function incrementar13613() {
  base.value++;
}
</script>
