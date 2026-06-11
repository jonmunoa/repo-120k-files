<template>
  <section class="panel-38529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38529");
const base = ref(38529);
const total = computed(() => base.value * 2);

function incrementar38529() {
  base.value++;
}
</script>
