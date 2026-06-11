<template>
  <section class="panel-56093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56093");
const base = ref(56093);
const total = computed(() => base.value * 2);

function incrementar56093() {
  base.value++;
}
</script>
