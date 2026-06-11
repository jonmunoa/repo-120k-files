<template>
  <section class="panel-27405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27405");
const base = ref(27405);
const total = computed(() => base.value * 2);

function incrementar27405() {
  base.value++;
}
</script>
