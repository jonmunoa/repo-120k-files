<template>
  <section class="panel-52821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52821");
const base = ref(52821);
const total = computed(() => base.value * 2);

function incrementar52821() {
  base.value++;
}
</script>
