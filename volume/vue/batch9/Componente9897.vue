<template>
  <section class="panel-9897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9897");
const base = ref(9897);
const total = computed(() => base.value * 2);

function incrementar9897() {
  base.value++;
}
</script>
