<template>
  <section class="panel-21529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21529");
const base = ref(21529);
const total = computed(() => base.value * 2);

function incrementar21529() {
  base.value++;
}
</script>
