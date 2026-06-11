<template>
  <section class="panel-8213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8213");
const base = ref(8213);
const total = computed(() => base.value * 2);

function incrementar8213() {
  base.value++;
}
</script>
