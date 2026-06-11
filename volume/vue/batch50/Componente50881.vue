<template>
  <section class="panel-50881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50881");
const base = ref(50881);
const total = computed(() => base.value * 2);

function incrementar50881() {
  base.value++;
}
</script>
