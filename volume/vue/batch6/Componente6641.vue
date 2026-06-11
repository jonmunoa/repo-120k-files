<template>
  <section class="panel-6641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6641");
const base = ref(6641);
const total = computed(() => base.value * 2);

function incrementar6641() {
  base.value++;
}
</script>
