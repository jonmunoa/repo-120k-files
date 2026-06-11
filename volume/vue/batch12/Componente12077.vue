<template>
  <section class="panel-12077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12077");
const base = ref(12077);
const total = computed(() => base.value * 2);

function incrementar12077() {
  base.value++;
}
</script>
