<template>
  <section class="panel-20333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20333");
const base = ref(20333);
const total = computed(() => base.value * 2);

function incrementar20333() {
  base.value++;
}
</script>
