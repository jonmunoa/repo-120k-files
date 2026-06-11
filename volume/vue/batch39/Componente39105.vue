<template>
  <section class="panel-39105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39105");
const base = ref(39105);
const total = computed(() => base.value * 2);

function incrementar39105() {
  base.value++;
}
</script>
