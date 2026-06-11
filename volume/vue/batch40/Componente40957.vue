<template>
  <section class="panel-40957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40957");
const base = ref(40957);
const total = computed(() => base.value * 2);

function incrementar40957() {
  base.value++;
}
</script>
