<template>
  <section class="panel-15641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15641");
const base = ref(15641);
const total = computed(() => base.value * 2);

function incrementar15641() {
  base.value++;
}
</script>
