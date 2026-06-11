<template>
  <section class="panel-43009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43009");
const base = ref(43009);
const total = computed(() => base.value * 2);

function incrementar43009() {
  base.value++;
}
</script>
