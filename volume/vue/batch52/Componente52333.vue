<template>
  <section class="panel-52333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52333");
const base = ref(52333);
const total = computed(() => base.value * 2);

function incrementar52333() {
  base.value++;
}
</script>
