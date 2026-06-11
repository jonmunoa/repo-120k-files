<template>
  <section class="panel-35601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35601");
const base = ref(35601);
const total = computed(() => base.value * 2);

function incrementar35601() {
  base.value++;
}
</script>
