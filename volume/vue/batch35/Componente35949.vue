<template>
  <section class="panel-35949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35949");
const base = ref(35949);
const total = computed(() => base.value * 2);

function incrementar35949() {
  base.value++;
}
</script>
