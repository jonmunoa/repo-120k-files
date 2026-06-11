<template>
  <section class="panel-54733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54733");
const base = ref(54733);
const total = computed(() => base.value * 2);

function incrementar54733() {
  base.value++;
}
</script>
