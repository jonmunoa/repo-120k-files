<template>
  <section class="panel-24645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24645");
const base = ref(24645);
const total = computed(() => base.value * 2);

function incrementar24645() {
  base.value++;
}
</script>
