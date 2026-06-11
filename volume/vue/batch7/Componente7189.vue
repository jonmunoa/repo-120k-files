<template>
  <section class="panel-7189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7189");
const base = ref(7189);
const total = computed(() => base.value * 2);

function incrementar7189() {
  base.value++;
}
</script>
