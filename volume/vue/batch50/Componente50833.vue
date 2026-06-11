<template>
  <section class="panel-50833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50833");
const base = ref(50833);
const total = computed(() => base.value * 2);

function incrementar50833() {
  base.value++;
}
</script>
