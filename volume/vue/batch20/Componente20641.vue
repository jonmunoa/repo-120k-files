<template>
  <section class="panel-20641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20641");
const base = ref(20641);
const total = computed(() => base.value * 2);

function incrementar20641() {
  base.value++;
}
</script>
