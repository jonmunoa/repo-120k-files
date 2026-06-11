<template>
  <section class="panel-42577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42577");
const base = ref(42577);
const total = computed(() => base.value * 2);

function incrementar42577() {
  base.value++;
}
</script>
