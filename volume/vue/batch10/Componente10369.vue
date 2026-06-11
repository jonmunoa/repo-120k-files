<template>
  <section class="panel-10369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10369");
const base = ref(10369);
const total = computed(() => base.value * 2);

function incrementar10369() {
  base.value++;
}
</script>
