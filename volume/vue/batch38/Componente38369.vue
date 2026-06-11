<template>
  <section class="panel-38369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38369");
const base = ref(38369);
const total = computed(() => base.value * 2);

function incrementar38369() {
  base.value++;
}
</script>
