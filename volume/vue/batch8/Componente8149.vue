<template>
  <section class="panel-8149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8149");
const base = ref(8149);
const total = computed(() => base.value * 2);

function incrementar8149() {
  base.value++;
}
</script>
