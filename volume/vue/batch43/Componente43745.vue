<template>
  <section class="panel-43745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43745");
const base = ref(43745);
const total = computed(() => base.value * 2);

function incrementar43745() {
  base.value++;
}
</script>
