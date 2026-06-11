<template>
  <section class="panel-30093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30093");
const base = ref(30093);
const total = computed(() => base.value * 2);

function incrementar30093() {
  base.value++;
}
</script>
