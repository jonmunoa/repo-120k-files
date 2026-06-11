<template>
  <section class="panel-37105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37105");
const base = ref(37105);
const total = computed(() => base.value * 2);

function incrementar37105() {
  base.value++;
}
</script>
