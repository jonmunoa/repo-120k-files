<template>
  <section class="panel-48765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48765");
const base = ref(48765);
const total = computed(() => base.value * 2);

function incrementar48765() {
  base.value++;
}
</script>
