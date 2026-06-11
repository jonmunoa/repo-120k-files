<template>
  <section class="panel-48605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48605");
const base = ref(48605);
const total = computed(() => base.value * 2);

function incrementar48605() {
  base.value++;
}
</script>
