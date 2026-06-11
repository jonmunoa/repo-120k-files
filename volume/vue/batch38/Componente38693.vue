<template>
  <section class="panel-38693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38693");
const base = ref(38693);
const total = computed(() => base.value * 2);

function incrementar38693() {
  base.value++;
}
</script>
