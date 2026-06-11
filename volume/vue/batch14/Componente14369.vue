<template>
  <section class="panel-14369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14369");
const base = ref(14369);
const total = computed(() => base.value * 2);

function incrementar14369() {
  base.value++;
}
</script>
