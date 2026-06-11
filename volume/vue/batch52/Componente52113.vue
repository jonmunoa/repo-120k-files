<template>
  <section class="panel-52113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52113");
const base = ref(52113);
const total = computed(() => base.value * 2);

function incrementar52113() {
  base.value++;
}
</script>
