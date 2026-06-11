<template>
  <section class="panel-55405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55405");
const base = ref(55405);
const total = computed(() => base.value * 2);

function incrementar55405() {
  base.value++;
}
</script>
