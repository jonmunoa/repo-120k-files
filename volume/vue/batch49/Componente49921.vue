<template>
  <section class="panel-49921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49921");
const base = ref(49921);
const total = computed(() => base.value * 2);

function incrementar49921() {
  base.value++;
}
</script>
