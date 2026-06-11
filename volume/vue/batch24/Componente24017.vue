<template>
  <section class="panel-24017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24017");
const base = ref(24017);
const total = computed(() => base.value * 2);

function incrementar24017() {
  base.value++;
}
</script>
