<template>
  <section class="panel-20113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20113");
const base = ref(20113);
const total = computed(() => base.value * 2);

function incrementar20113() {
  base.value++;
}
</script>
