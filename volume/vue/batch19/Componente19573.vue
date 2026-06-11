<template>
  <section class="panel-19573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19573");
const base = ref(19573);
const total = computed(() => base.value * 2);

function incrementar19573() {
  base.value++;
}
</script>
