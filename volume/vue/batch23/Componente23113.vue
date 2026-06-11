<template>
  <section class="panel-23113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23113");
const base = ref(23113);
const total = computed(() => base.value * 2);

function incrementar23113() {
  base.value++;
}
</script>
