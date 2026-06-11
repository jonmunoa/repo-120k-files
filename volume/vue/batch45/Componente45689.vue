<template>
  <section class="panel-45689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45689");
const base = ref(45689);
const total = computed(() => base.value * 2);

function incrementar45689() {
  base.value++;
}
</script>
