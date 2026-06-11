<template>
  <section class="panel-38281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38281");
const base = ref(38281);
const total = computed(() => base.value * 2);

function incrementar38281() {
  base.value++;
}
</script>
