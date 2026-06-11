<template>
  <section class="panel-38913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38913");
const base = ref(38913);
const total = computed(() => base.value * 2);

function incrementar38913() {
  base.value++;
}
</script>
