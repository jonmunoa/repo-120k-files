<template>
  <section class="panel-6921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6921");
const base = ref(6921);
const total = computed(() => base.value * 2);

function incrementar6921() {
  base.value++;
}
</script>
