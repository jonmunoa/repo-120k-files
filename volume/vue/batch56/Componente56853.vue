<template>
  <section class="panel-56853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56853");
const base = ref(56853);
const total = computed(() => base.value * 2);

function incrementar56853() {
  base.value++;
}
</script>
