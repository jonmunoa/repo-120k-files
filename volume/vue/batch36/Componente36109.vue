<template>
  <section class="panel-36109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36109");
const base = ref(36109);
const total = computed(() => base.value * 2);

function incrementar36109() {
  base.value++;
}
</script>
