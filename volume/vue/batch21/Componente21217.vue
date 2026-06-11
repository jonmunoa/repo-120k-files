<template>
  <section class="panel-21217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21217");
const base = ref(21217);
const total = computed(() => base.value * 2);

function incrementar21217() {
  base.value++;
}
</script>
