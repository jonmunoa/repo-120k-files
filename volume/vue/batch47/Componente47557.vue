<template>
  <section class="panel-47557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47557");
const base = ref(47557);
const total = computed(() => base.value * 2);

function incrementar47557() {
  base.value++;
}
</script>
