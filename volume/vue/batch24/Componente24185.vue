<template>
  <section class="panel-24185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24185");
const base = ref(24185);
const total = computed(() => base.value * 2);

function incrementar24185() {
  base.value++;
}
</script>
