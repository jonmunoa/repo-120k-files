<template>
  <section class="panel-3921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3921");
const base = ref(3921);
const total = computed(() => base.value * 2);

function incrementar3921() {
  base.value++;
}
</script>
