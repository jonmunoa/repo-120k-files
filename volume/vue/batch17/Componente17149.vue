<template>
  <section class="panel-17149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17149");
const base = ref(17149);
const total = computed(() => base.value * 2);

function incrementar17149() {
  base.value++;
}
</script>
