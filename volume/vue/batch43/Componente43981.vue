<template>
  <section class="panel-43981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43981");
const base = ref(43981);
const total = computed(() => base.value * 2);

function incrementar43981() {
  base.value++;
}
</script>
