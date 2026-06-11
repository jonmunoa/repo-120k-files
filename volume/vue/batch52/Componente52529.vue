<template>
  <section class="panel-52529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52529");
const base = ref(52529);
const total = computed(() => base.value * 2);

function incrementar52529() {
  base.value++;
}
</script>
