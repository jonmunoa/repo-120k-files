<template>
  <section class="panel-7881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7881");
const base = ref(7881);
const total = computed(() => base.value * 2);

function incrementar7881() {
  base.value++;
}
</script>
