<template>
  <section class="panel-33317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33317");
const base = ref(33317);
const total = computed(() => base.value * 2);

function incrementar33317() {
  base.value++;
}
</script>
