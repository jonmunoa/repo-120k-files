<template>
  <section class="panel-37093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37093");
const base = ref(37093);
const total = computed(() => base.value * 2);

function incrementar37093() {
  base.value++;
}
</script>
