<template>
  <section class="panel-2421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2421");
const base = ref(2421);
const total = computed(() => base.value * 2);

function incrementar2421() {
  base.value++;
}
</script>
