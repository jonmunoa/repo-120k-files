<template>
  <section class="panel-22153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22153");
const base = ref(22153);
const total = computed(() => base.value * 2);

function incrementar22153() {
  base.value++;
}
</script>
