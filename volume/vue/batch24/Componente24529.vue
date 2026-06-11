<template>
  <section class="panel-24529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24529");
const base = ref(24529);
const total = computed(() => base.value * 2);

function incrementar24529() {
  base.value++;
}
</script>
