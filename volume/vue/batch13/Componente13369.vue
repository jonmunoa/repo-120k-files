<template>
  <section class="panel-13369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13369");
const base = ref(13369);
const total = computed(() => base.value * 2);

function incrementar13369() {
  base.value++;
}
</script>
