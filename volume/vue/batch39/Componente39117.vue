<template>
  <section class="panel-39117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39117");
const base = ref(39117);
const total = computed(() => base.value * 2);

function incrementar39117() {
  base.value++;
}
</script>
