<template>
  <section class="panel-34677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34677");
const base = ref(34677);
const total = computed(() => base.value * 2);

function incrementar34677() {
  base.value++;
}
</script>
