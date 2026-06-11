<template>
  <section class="panel-41529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41529");
const base = ref(41529);
const total = computed(() => base.value * 2);

function incrementar41529() {
  base.value++;
}
</script>
