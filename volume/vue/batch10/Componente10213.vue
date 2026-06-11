<template>
  <section class="panel-10213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10213");
const base = ref(10213);
const total = computed(() => base.value * 2);

function incrementar10213() {
  base.value++;
}
</script>
