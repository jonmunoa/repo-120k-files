<template>
  <section class="panel-45357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45357");
const base = ref(45357);
const total = computed(() => base.value * 2);

function incrementar45357() {
  base.value++;
}
</script>
