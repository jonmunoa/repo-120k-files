<template>
  <section class="panel-15533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15533");
const base = ref(15533);
const total = computed(() => base.value * 2);

function incrementar15533() {
  base.value++;
}
</script>
