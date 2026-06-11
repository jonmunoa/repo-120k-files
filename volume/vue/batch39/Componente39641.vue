<template>
  <section class="panel-39641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39641");
const base = ref(39641);
const total = computed(() => base.value * 2);

function incrementar39641() {
  base.value++;
}
</script>
