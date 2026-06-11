<template>
  <section class="panel-41913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41913");
const base = ref(41913);
const total = computed(() => base.value * 2);

function incrementar41913() {
  base.value++;
}
</script>
