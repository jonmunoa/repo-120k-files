<template>
  <section class="panel-1301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1301");
const base = ref(1301);
const total = computed(() => base.value * 2);

function incrementar1301() {
  base.value++;
}
</script>
