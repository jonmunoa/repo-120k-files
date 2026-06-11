<template>
  <section class="panel-14553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14553");
const base = ref(14553);
const total = computed(() => base.value * 2);

function incrementar14553() {
  base.value++;
}
</script>
