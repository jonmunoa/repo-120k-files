<template>
  <section class="panel-38965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38965");
const base = ref(38965);
const total = computed(() => base.value * 2);

function incrementar38965() {
  base.value++;
}
</script>
