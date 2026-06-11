<template>
  <section class="panel-24217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24217");
const base = ref(24217);
const total = computed(() => base.value * 2);

function incrementar24217() {
  base.value++;
}
</script>
