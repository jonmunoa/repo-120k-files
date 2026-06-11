<template>
  <section class="panel-36913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36913");
const base = ref(36913);
const total = computed(() => base.value * 2);

function incrementar36913() {
  base.value++;
}
</script>
