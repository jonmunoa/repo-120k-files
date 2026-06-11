<template>
  <section class="panel-47585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47585");
const base = ref(47585);
const total = computed(() => base.value * 2);

function incrementar47585() {
  base.value++;
}
</script>
