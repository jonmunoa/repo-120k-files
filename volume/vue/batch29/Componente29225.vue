<template>
  <section class="panel-29225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29225");
const base = ref(29225);
const total = computed(() => base.value * 2);

function incrementar29225() {
  base.value++;
}
</script>
