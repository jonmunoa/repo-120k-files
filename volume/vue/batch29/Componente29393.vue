<template>
  <section class="panel-29393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29393");
const base = ref(29393);
const total = computed(() => base.value * 2);

function incrementar29393() {
  base.value++;
}
</script>
