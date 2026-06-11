<template>
  <section class="panel-38601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38601");
const base = ref(38601);
const total = computed(() => base.value * 2);

function incrementar38601() {
  base.value++;
}
</script>
