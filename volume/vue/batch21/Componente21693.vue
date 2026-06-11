<template>
  <section class="panel-21693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21693");
const base = ref(21693);
const total = computed(() => base.value * 2);

function incrementar21693() {
  base.value++;
}
</script>
