<template>
  <section class="panel-51529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51529");
const base = ref(51529);
const total = computed(() => base.value * 2);

function incrementar51529() {
  base.value++;
}
</script>
