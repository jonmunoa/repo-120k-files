<template>
  <section class="panel-12605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12605");
const base = ref(12605);
const total = computed(() => base.value * 2);

function incrementar12605() {
  base.value++;
}
</script>
