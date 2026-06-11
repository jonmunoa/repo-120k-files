<template>
  <section class="panel-25341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25341");
const base = ref(25341);
const total = computed(() => base.value * 2);

function incrementar25341() {
  base.value++;
}
</script>
