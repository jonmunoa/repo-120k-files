<template>
  <section class="panel-18525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18525");
const base = ref(18525);
const total = computed(() => base.value * 2);

function incrementar18525() {
  base.value++;
}
</script>
