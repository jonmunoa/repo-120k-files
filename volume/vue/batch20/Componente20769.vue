<template>
  <section class="panel-20769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20769");
const base = ref(20769);
const total = computed(() => base.value * 2);

function incrementar20769() {
  base.value++;
}
</script>
