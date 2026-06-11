<template>
  <section class="panel-15673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15673");
const base = ref(15673);
const total = computed(() => base.value * 2);

function incrementar15673() {
  base.value++;
}
</script>
