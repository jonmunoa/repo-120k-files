<template>
  <section class="panel-6853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6853");
const base = ref(6853);
const total = computed(() => base.value * 2);

function incrementar6853() {
  base.value++;
}
</script>
