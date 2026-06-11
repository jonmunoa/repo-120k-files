<template>
  <section class="panel-37233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37233");
const base = ref(37233);
const total = computed(() => base.value * 2);

function incrementar37233() {
  base.value++;
}
</script>
