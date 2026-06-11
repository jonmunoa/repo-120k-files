<template>
  <section class="panel-22469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22469");
const base = ref(22469);
const total = computed(() => base.value * 2);

function incrementar22469() {
  base.value++;
}
</script>
