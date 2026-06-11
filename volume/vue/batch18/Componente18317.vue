<template>
  <section class="panel-18317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18317");
const base = ref(18317);
const total = computed(() => base.value * 2);

function incrementar18317() {
  base.value++;
}
</script>
