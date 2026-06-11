<template>
  <section class="panel-52941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52941");
const base = ref(52941);
const total = computed(() => base.value * 2);

function incrementar52941() {
  base.value++;
}
</script>
