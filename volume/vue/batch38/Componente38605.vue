<template>
  <section class="panel-38605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38605");
const base = ref(38605);
const total = computed(() => base.value * 2);

function incrementar38605() {
  base.value++;
}
</script>
