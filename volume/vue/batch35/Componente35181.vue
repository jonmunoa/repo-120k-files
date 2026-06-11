<template>
  <section class="panel-35181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35181");
const base = ref(35181);
const total = computed(() => base.value * 2);

function incrementar35181() {
  base.value++;
}
</script>
