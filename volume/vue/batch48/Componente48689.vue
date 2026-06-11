<template>
  <section class="panel-48689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48689");
const base = ref(48689);
const total = computed(() => base.value * 2);

function incrementar48689() {
  base.value++;
}
</script>
