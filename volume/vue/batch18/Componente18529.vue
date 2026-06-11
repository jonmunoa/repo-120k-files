<template>
  <section class="panel-18529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18529");
const base = ref(18529);
const total = computed(() => base.value * 2);

function incrementar18529() {
  base.value++;
}
</script>
