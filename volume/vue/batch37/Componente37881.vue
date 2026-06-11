<template>
  <section class="panel-37881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37881");
const base = ref(37881);
const total = computed(() => base.value * 2);

function incrementar37881() {
  base.value++;
}
</script>
