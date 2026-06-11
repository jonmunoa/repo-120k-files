<template>
  <section class="panel-22113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22113");
const base = ref(22113);
const total = computed(() => base.value * 2);

function incrementar22113() {
  base.value++;
}
</script>
