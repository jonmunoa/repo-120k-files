<template>
  <section class="panel-36881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36881");
const base = ref(36881);
const total = computed(() => base.value * 2);

function incrementar36881() {
  base.value++;
}
</script>
