<template>
  <section class="panel-19173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19173");
const base = ref(19173);
const total = computed(() => base.value * 2);

function incrementar19173() {
  base.value++;
}
</script>
