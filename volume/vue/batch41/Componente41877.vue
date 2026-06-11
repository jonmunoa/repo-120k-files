<template>
  <section class="panel-41877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41877");
const base = ref(41877);
const total = computed(() => base.value * 2);

function incrementar41877() {
  base.value++;
}
</script>
