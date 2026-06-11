<template>
  <section class="panel-7729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7729");
const base = ref(7729);
const total = computed(() => base.value * 2);

function incrementar7729() {
  base.value++;
}
</script>
