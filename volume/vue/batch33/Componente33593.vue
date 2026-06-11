<template>
  <section class="panel-33593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33593");
const base = ref(33593);
const total = computed(() => base.value * 2);

function incrementar33593() {
  base.value++;
}
</script>
