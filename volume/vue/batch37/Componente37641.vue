<template>
  <section class="panel-37641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37641");
const base = ref(37641);
const total = computed(() => base.value * 2);

function incrementar37641() {
  base.value++;
}
</script>
