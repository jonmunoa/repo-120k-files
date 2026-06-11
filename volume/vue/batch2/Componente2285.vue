<template>
  <section class="panel-2285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2285");
const base = ref(2285);
const total = computed(() => base.value * 2);

function incrementar2285() {
  base.value++;
}
</script>
