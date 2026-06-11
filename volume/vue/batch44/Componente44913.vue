<template>
  <section class="panel-44913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44913");
const base = ref(44913);
const total = computed(() => base.value * 2);

function incrementar44913() {
  base.value++;
}
</script>
