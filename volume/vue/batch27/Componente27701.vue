<template>
  <section class="panel-27701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27701");
const base = ref(27701);
const total = computed(() => base.value * 2);

function incrementar27701() {
  base.value++;
}
</script>
