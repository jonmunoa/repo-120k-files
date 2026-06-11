<template>
  <section class="panel-10897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10897");
const base = ref(10897);
const total = computed(() => base.value * 2);

function incrementar10897() {
  base.value++;
}
</script>
