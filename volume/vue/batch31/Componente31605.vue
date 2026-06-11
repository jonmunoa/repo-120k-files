<template>
  <section class="panel-31605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31605");
const base = ref(31605);
const total = computed(() => base.value * 2);

function incrementar31605() {
  base.value++;
}
</script>
