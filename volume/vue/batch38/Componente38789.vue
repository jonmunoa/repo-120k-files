<template>
  <section class="panel-38789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38789");
const base = ref(38789);
const total = computed(() => base.value * 2);

function incrementar38789() {
  base.value++;
}
</script>
