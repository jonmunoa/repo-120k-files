<template>
  <section class="panel-10333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10333");
const base = ref(10333);
const total = computed(() => base.value * 2);

function incrementar10333() {
  base.value++;
}
</script>
