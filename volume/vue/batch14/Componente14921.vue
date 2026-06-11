<template>
  <section class="panel-14921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14921");
const base = ref(14921);
const total = computed(() => base.value * 2);

function incrementar14921() {
  base.value++;
}
</script>
