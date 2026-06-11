<template>
  <section class="panel-2973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2973");
const base = ref(2973);
const total = computed(() => base.value * 2);

function incrementar2973() {
  base.value++;
}
</script>
