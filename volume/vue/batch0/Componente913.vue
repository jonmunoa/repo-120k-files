<template>
  <section class="panel-913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 913");
const base = ref(913);
const total = computed(() => base.value * 2);

function incrementar913() {
  base.value++;
}
</script>
