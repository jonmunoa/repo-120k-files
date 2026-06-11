<template>
  <section class="panel-31921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31921");
const base = ref(31921);
const total = computed(() => base.value * 2);

function incrementar31921() {
  base.value++;
}
</script>
