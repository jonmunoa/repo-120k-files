<template>
  <section class="panel-44853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44853");
const base = ref(44853);
const total = computed(() => base.value * 2);

function incrementar44853() {
  base.value++;
}
</script>
