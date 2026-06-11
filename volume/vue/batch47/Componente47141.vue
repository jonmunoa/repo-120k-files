<template>
  <section class="panel-47141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47141");
const base = ref(47141);
const total = computed(() => base.value * 2);

function incrementar47141() {
  base.value++;
}
</script>
