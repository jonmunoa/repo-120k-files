<template>
  <section class="panel-20185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20185");
const base = ref(20185);
const total = computed(() => base.value * 2);

function incrementar20185() {
  base.value++;
}
</script>
