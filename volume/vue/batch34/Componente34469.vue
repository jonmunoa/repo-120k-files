<template>
  <section class="panel-34469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34469");
const base = ref(34469);
const total = computed(() => base.value * 2);

function incrementar34469() {
  base.value++;
}
</script>
