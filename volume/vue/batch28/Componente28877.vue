<template>
  <section class="panel-28877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28877");
const base = ref(28877);
const total = computed(() => base.value * 2);

function incrementar28877() {
  base.value++;
}
</script>
