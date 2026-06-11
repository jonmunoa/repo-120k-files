<template>
  <section class="panel-49093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49093");
const base = ref(49093);
const total = computed(() => base.value * 2);

function incrementar49093() {
  base.value++;
}
</script>
