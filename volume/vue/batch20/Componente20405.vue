<template>
  <section class="panel-20405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20405");
const base = ref(20405);
const total = computed(() => base.value * 2);

function incrementar20405() {
  base.value++;
}
</script>
