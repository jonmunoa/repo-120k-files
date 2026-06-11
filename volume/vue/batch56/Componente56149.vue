<template>
  <section class="panel-56149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56149");
const base = ref(56149);
const total = computed(() => base.value * 2);

function incrementar56149() {
  base.value++;
}
</script>
