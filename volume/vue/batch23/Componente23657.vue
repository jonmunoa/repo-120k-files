<template>
  <section class="panel-23657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23657");
const base = ref(23657);
const total = computed(() => base.value * 2);

function incrementar23657() {
  base.value++;
}
</script>
