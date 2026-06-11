<template>
  <section class="panel-37529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37529");
const base = ref(37529);
const total = computed(() => base.value * 2);

function incrementar37529() {
  base.value++;
}
</script>
