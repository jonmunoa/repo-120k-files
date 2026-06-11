<template>
  <section class="panel-34369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34369");
const base = ref(34369);
const total = computed(() => base.value * 2);

function incrementar34369() {
  base.value++;
}
</script>
