<template>
  <section class="panel-39229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39229");
const base = ref(39229);
const total = computed(() => base.value * 2);

function incrementar39229() {
  base.value++;
}
</script>
