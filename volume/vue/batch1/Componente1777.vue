<template>
  <section class="panel-1777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1777");
const base = ref(1777);
const total = computed(() => base.value * 2);

function incrementar1777() {
  base.value++;
}
</script>
