<template>
  <section class="panel-18341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18341");
const base = ref(18341);
const total = computed(() => base.value * 2);

function incrementar18341() {
  base.value++;
}
</script>
