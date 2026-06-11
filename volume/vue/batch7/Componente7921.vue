<template>
  <section class="panel-7921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7921");
const base = ref(7921);
const total = computed(() => base.value * 2);

function incrementar7921() {
  base.value++;
}
</script>
