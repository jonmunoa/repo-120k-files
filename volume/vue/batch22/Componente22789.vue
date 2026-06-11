<template>
  <section class="panel-22789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22789");
const base = ref(22789);
const total = computed(() => base.value * 2);

function incrementar22789() {
  base.value++;
}
</script>
