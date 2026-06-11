<template>
  <section class="panel-113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 113");
const base = ref(113);
const total = computed(() => base.value * 2);

function incrementar113() {
  base.value++;
}
</script>
