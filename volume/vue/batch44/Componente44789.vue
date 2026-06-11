<template>
  <section class="panel-44789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44789");
const base = ref(44789);
const total = computed(() => base.value * 2);

function incrementar44789() {
  base.value++;
}
</script>
