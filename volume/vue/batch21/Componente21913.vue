<template>
  <section class="panel-21913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21913");
const base = ref(21913);
const total = computed(() => base.value * 2);

function incrementar21913() {
  base.value++;
}
</script>
