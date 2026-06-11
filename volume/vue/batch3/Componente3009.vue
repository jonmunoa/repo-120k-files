<template>
  <section class="panel-3009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3009");
const base = ref(3009);
const total = computed(() => base.value * 2);

function incrementar3009() {
  base.value++;
}
</script>
