<template>
  <section class="panel-52693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52693");
const base = ref(52693);
const total = computed(() => base.value * 2);

function incrementar52693() {
  base.value++;
}
</script>
