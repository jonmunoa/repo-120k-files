<template>
  <section class="panel-52641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52641");
const base = ref(52641);
const total = computed(() => base.value * 2);

function incrementar52641() {
  base.value++;
}
</script>
