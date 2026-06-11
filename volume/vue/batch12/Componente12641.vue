<template>
  <section class="panel-12641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12641");
const base = ref(12641);
const total = computed(() => base.value * 2);

function incrementar12641() {
  base.value++;
}
</script>
