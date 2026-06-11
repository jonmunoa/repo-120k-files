<template>
  <section class="panel-52965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52965");
const base = ref(52965);
const total = computed(() => base.value * 2);

function incrementar52965() {
  base.value++;
}
</script>
