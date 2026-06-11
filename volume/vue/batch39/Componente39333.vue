<template>
  <section class="panel-39333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39333");
const base = ref(39333);
const total = computed(() => base.value * 2);

function incrementar39333() {
  base.value++;
}
</script>
