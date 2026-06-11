<template>
  <section class="panel-36713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36713");
const base = ref(36713);
const total = computed(() => base.value * 2);

function incrementar36713() {
  base.value++;
}
</script>
