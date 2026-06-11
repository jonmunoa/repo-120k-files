<template>
  <section class="panel-48641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48641");
const base = ref(48641);
const total = computed(() => base.value * 2);

function incrementar48641() {
  base.value++;
}
</script>
