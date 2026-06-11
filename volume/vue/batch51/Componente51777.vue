<template>
  <section class="panel-51777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51777");
const base = ref(51777);
const total = computed(() => base.value * 2);

function incrementar51777() {
  base.value++;
}
</script>
