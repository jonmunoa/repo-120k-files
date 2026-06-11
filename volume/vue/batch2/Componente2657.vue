<template>
  <section class="panel-2657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2657");
const base = ref(2657);
const total = computed(() => base.value * 2);

function incrementar2657() {
  base.value++;
}
</script>
