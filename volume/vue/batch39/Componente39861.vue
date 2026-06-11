<template>
  <section class="panel-39861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39861");
const base = ref(39861);
const total = computed(() => base.value * 2);

function incrementar39861() {
  base.value++;
}
</script>
