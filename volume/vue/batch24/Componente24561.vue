<template>
  <section class="panel-24561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24561");
const base = ref(24561);
const total = computed(() => base.value * 2);

function incrementar24561() {
  base.value++;
}
</script>
