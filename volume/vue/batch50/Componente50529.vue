<template>
  <section class="panel-50529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50529");
const base = ref(50529);
const total = computed(() => base.value * 2);

function incrementar50529() {
  base.value++;
}
</script>
