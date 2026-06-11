<template>
  <section class="panel-19317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19317");
const base = ref(19317);
const total = computed(() => base.value * 2);

function incrementar19317() {
  base.value++;
}
</script>
