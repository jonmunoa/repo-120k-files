<template>
  <section class="panel-14585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14585");
const base = ref(14585);
const total = computed(() => base.value * 2);

function incrementar14585() {
  base.value++;
}
</script>
