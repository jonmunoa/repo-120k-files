<template>
  <section class="panel-11405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11405");
const base = ref(11405);
const total = computed(() => base.value * 2);

function incrementar11405() {
  base.value++;
}
</script>
