<template>
  <section class="panel-37897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37897");
const base = ref(37897);
const total = computed(() => base.value * 2);

function incrementar37897() {
  base.value++;
}
</script>
