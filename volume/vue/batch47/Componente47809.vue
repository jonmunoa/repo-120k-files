<template>
  <section class="panel-47809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47809");
const base = ref(47809);
const total = computed(() => base.value * 2);

function incrementar47809() {
  base.value++;
}
</script>
