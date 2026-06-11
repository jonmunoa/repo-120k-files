<template>
  <section class="panel-24897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24897");
const base = ref(24897);
const total = computed(() => base.value * 2);

function incrementar24897() {
  base.value++;
}
</script>
