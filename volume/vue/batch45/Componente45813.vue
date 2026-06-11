<template>
  <section class="panel-45813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45813");
const base = ref(45813);
const total = computed(() => base.value * 2);

function incrementar45813() {
  base.value++;
}
</script>
