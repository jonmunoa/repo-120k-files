<template>
  <section class="panel-24877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24877");
const base = ref(24877);
const total = computed(() => base.value * 2);

function incrementar24877() {
  base.value++;
}
</script>
