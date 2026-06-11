<template>
  <section class="panel-3637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3637");
const base = ref(3637);
const total = computed(() => base.value * 2);

function incrementar3637() {
  base.value++;
}
</script>
