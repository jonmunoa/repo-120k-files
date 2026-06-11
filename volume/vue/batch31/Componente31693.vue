<template>
  <section class="panel-31693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31693");
const base = ref(31693);
const total = computed(() => base.value * 2);

function incrementar31693() {
  base.value++;
}
</script>
