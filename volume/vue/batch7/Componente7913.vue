<template>
  <section class="panel-7913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7913");
const base = ref(7913);
const total = computed(() => base.value * 2);

function incrementar7913() {
  base.value++;
}
</script>
