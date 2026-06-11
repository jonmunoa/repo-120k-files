<template>
  <section class="panel-48209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48209");
const base = ref(48209);
const total = computed(() => base.value * 2);

function incrementar48209() {
  base.value++;
}
</script>
