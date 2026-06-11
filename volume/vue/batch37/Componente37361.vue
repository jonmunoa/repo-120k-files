<template>
  <section class="panel-37361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37361");
const base = ref(37361);
const total = computed(() => base.value * 2);

function incrementar37361() {
  base.value++;
}
</script>
