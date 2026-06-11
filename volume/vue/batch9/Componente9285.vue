<template>
  <section class="panel-9285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9285");
const base = ref(9285);
const total = computed(() => base.value * 2);

function incrementar9285() {
  base.value++;
}
</script>
