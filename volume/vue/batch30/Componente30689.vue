<template>
  <section class="panel-30689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30689");
const base = ref(30689);
const total = computed(() => base.value * 2);

function incrementar30689() {
  base.value++;
}
</script>
