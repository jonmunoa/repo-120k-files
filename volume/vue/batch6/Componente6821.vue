<template>
  <section class="panel-6821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6821");
const base = ref(6821);
const total = computed(() => base.value * 2);

function incrementar6821() {
  base.value++;
}
</script>
