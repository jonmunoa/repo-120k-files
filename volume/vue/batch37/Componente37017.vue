<template>
  <section class="panel-37017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37017");
const base = ref(37017);
const total = computed(() => base.value * 2);

function incrementar37017() {
  base.value++;
}
</script>
