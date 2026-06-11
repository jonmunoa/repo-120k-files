<template>
  <section class="panel-32605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32605");
const base = ref(32605);
const total = computed(() => base.value * 2);

function incrementar32605() {
  base.value++;
}
</script>
