<template>
  <section class="panel-51557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51557");
const base = ref(51557);
const total = computed(() => base.value * 2);

function incrementar51557() {
  base.value++;
}
</script>
