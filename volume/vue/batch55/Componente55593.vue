<template>
  <section class="panel-55593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55593");
const base = ref(55593);
const total = computed(() => base.value * 2);

function incrementar55593() {
  base.value++;
}
</script>
