<template>
  <section class="panel-47897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47897");
const base = ref(47897);
const total = computed(() => base.value * 2);

function incrementar47897() {
  base.value++;
}
</script>
