<template>
  <section class="panel-45525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45525");
const base = ref(45525);
const total = computed(() => base.value * 2);

function incrementar45525() {
  base.value++;
}
</script>
