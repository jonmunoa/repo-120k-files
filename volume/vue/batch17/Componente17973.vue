<template>
  <section class="panel-17973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17973");
const base = ref(17973);
const total = computed(() => base.value * 2);

function incrementar17973() {
  base.value++;
}
</script>
