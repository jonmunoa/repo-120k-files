<template>
  <section class="panel-36173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36173");
const base = ref(36173);
const total = computed(() => base.value * 2);

function incrementar36173() {
  base.value++;
}
</script>
