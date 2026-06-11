<template>
  <section class="panel-73">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 73");
const base = ref(73);
const total = computed(() => base.value * 2);

function incrementar73() {
  base.value++;
}
</script>
