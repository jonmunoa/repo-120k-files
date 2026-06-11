<template>
  <section class="panel-7657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7657");
const base = ref(7657);
const total = computed(() => base.value * 2);

function incrementar7657() {
  base.value++;
}
</script>
