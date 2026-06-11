<template>
  <section class="panel-31229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31229");
const base = ref(31229);
const total = computed(() => base.value * 2);

function incrementar31229() {
  base.value++;
}
</script>
