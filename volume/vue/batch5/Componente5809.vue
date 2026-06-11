<template>
  <section class="panel-5809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5809");
const base = ref(5809);
const total = computed(() => base.value * 2);

function incrementar5809() {
  base.value++;
}
</script>
