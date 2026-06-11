<template>
  <section class="panel-27605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27605");
const base = ref(27605);
const total = computed(() => base.value * 2);

function incrementar27605() {
  base.value++;
}
</script>
