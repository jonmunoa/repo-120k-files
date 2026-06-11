<template>
  <section class="panel-48145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48145");
const base = ref(48145);
const total = computed(() => base.value * 2);

function incrementar48145() {
  base.value++;
}
</script>
