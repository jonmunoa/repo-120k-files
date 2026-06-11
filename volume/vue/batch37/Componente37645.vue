<template>
  <section class="panel-37645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37645");
const base = ref(37645);
const total = computed(() => base.value * 2);

function incrementar37645() {
  base.value++;
}
</script>
