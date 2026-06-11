<template>
  <section class="panel-37965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37965");
const base = ref(37965);
const total = computed(() => base.value * 2);

function incrementar37965() {
  base.value++;
}
</script>
