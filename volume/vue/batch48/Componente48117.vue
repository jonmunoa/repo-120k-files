<template>
  <section class="panel-48117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48117");
const base = ref(48117);
const total = computed(() => base.value * 2);

function incrementar48117() {
  base.value++;
}
</script>
