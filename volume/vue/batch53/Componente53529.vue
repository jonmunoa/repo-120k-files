<template>
  <section class="panel-53529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53529");
const base = ref(53529);
const total = computed(() => base.value * 2);

function incrementar53529() {
  base.value++;
}
</script>
