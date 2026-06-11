<template>
  <section class="panel-41921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41921");
const base = ref(41921);
const total = computed(() => base.value * 2);

function incrementar41921() {
  base.value++;
}
</script>
