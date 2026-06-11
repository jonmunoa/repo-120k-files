<template>
  <section class="panel-21701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21701");
const base = ref(21701);
const total = computed(() => base.value * 2);

function incrementar21701() {
  base.value++;
}
</script>
