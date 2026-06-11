<template>
  <section class="panel-35965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35965");
const base = ref(35965);
const total = computed(() => base.value * 2);

function incrementar35965() {
  base.value++;
}
</script>
