<template>
  <section class="panel-15529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15529");
const base = ref(15529);
const total = computed(() => base.value * 2);

function incrementar15529() {
  base.value++;
}
</script>
