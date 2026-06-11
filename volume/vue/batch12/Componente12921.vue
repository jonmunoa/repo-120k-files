<template>
  <section class="panel-12921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12921");
const base = ref(12921);
const total = computed(() => base.value * 2);

function incrementar12921() {
  base.value++;
}
</script>
