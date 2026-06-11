<template>
  <section class="panel-49113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49113");
const base = ref(49113);
const total = computed(() => base.value * 2);

function incrementar49113() {
  base.value++;
}
</script>
