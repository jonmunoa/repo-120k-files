<template>
  <section class="panel-4973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4973");
const base = ref(4973);
const total = computed(() => base.value * 2);

function incrementar4973() {
  base.value++;
}
</script>
