<template>
  <section class="panel-38533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38533");
const base = ref(38533);
const total = computed(() => base.value * 2);

function incrementar38533() {
  base.value++;
}
</script>
