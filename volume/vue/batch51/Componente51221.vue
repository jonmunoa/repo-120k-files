<template>
  <section class="panel-51221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51221");
const base = ref(51221);
const total = computed(() => base.value * 2);

function incrementar51221() {
  base.value++;
}
</script>
