<template>
  <section class="panel-6973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6973");
const base = ref(6973);
const total = computed(() => base.value * 2);

function incrementar6973() {
  base.value++;
}
</script>
