<template>
  <section class="panel-20813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20813");
const base = ref(20813);
const total = computed(() => base.value * 2);

function incrementar20813() {
  base.value++;
}
</script>
