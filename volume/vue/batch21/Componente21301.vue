<template>
  <section class="panel-21301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21301");
const base = ref(21301);
const total = computed(() => base.value * 2);

function incrementar21301() {
  base.value++;
}
</script>
