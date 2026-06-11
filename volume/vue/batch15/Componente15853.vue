<template>
  <section class="panel-15853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15853");
const base = ref(15853);
const total = computed(() => base.value * 2);

function incrementar15853() {
  base.value++;
}
</script>
