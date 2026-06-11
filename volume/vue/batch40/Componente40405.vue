<template>
  <section class="panel-40405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40405");
const base = ref(40405);
const total = computed(() => base.value * 2);

function incrementar40405() {
  base.value++;
}
</script>
