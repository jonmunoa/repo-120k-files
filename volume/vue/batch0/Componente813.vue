<template>
  <section class="panel-813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 813");
const base = ref(813);
const total = computed(() => base.value * 2);

function incrementar813() {
  base.value++;
}
</script>
