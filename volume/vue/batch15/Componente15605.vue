<template>
  <section class="panel-15605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15605");
const base = ref(15605);
const total = computed(() => base.value * 2);

function incrementar15605() {
  base.value++;
}
</script>
