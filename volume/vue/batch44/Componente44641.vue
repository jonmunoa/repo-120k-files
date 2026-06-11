<template>
  <section class="panel-44641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44641");
const base = ref(44641);
const total = computed(() => base.value * 2);

function incrementar44641() {
  base.value++;
}
</script>
