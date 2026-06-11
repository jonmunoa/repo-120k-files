<template>
  <section class="panel-47257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47257");
const base = ref(47257);
const total = computed(() => base.value * 2);

function incrementar47257() {
  base.value++;
}
</script>
