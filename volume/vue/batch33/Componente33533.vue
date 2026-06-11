<template>
  <section class="panel-33533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33533");
const base = ref(33533);
const total = computed(() => base.value * 2);

function incrementar33533() {
  base.value++;
}
</script>
