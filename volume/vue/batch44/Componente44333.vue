<template>
  <section class="panel-44333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44333");
const base = ref(44333);
const total = computed(() => base.value * 2);

function incrementar44333() {
  base.value++;
}
</script>
