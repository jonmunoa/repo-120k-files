<template>
  <section class="panel-5141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5141");
const base = ref(5141);
const total = computed(() => base.value * 2);

function incrementar5141() {
  base.value++;
}
</script>
