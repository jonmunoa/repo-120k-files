<template>
  <section class="panel-545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 545");
const base = ref(545);
const total = computed(() => base.value * 2);

function incrementar545() {
  base.value++;
}
</script>
