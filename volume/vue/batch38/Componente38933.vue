<template>
  <section class="panel-38933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38933");
const base = ref(38933);
const total = computed(() => base.value * 2);

function incrementar38933() {
  base.value++;
}
</script>
