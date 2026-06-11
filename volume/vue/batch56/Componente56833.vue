<template>
  <section class="panel-56833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56833");
const base = ref(56833);
const total = computed(() => base.value * 2);

function incrementar56833() {
  base.value++;
}
</script>
