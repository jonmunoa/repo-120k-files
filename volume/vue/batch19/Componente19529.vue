<template>
  <section class="panel-19529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19529");
const base = ref(19529);
const total = computed(() => base.value * 2);

function incrementar19529() {
  base.value++;
}
</script>
