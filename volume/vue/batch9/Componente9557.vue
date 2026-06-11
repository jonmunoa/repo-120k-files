<template>
  <section class="panel-9557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9557");
const base = ref(9557);
const total = computed(() => base.value * 2);

function incrementar9557() {
  base.value++;
}
</script>
