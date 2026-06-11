<template>
  <section class="panel-38333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38333");
const base = ref(38333);
const total = computed(() => base.value * 2);

function incrementar38333() {
  base.value++;
}
</script>
