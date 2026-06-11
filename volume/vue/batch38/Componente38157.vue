<template>
  <section class="panel-38157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38157");
const base = ref(38157);
const total = computed(() => base.value * 2);

function incrementar38157() {
  base.value++;
}
</script>
