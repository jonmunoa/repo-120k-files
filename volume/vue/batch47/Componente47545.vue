<template>
  <section class="panel-47545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47545");
const base = ref(47545);
const total = computed(() => base.value * 2);

function incrementar47545() {
  base.value++;
}
</script>
