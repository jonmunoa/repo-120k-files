<template>
  <section class="panel-32913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32913");
const base = ref(32913);
const total = computed(() => base.value * 2);

function incrementar32913() {
  base.value++;
}
</script>
