<template>
  <section class="panel-6421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6421");
const base = ref(6421);
const total = computed(() => base.value * 2);

function incrementar6421() {
  base.value++;
}
</script>
