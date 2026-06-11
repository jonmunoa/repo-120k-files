<template>
  <section class="panel-35781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35781");
const base = ref(35781);
const total = computed(() => base.value * 2);

function incrementar35781() {
  base.value++;
}
</script>
