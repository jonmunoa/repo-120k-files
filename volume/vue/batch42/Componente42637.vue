<template>
  <section class="panel-42637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42637");
const base = ref(42637);
const total = computed(() => base.value * 2);

function incrementar42637() {
  base.value++;
}
</script>
