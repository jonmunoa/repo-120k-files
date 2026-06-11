<template>
  <section class="panel-50805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50805");
const base = ref(50805);
const total = computed(() => base.value * 2);

function incrementar50805() {
  base.value++;
}
</script>
