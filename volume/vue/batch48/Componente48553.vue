<template>
  <section class="panel-48553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48553");
const base = ref(48553);
const total = computed(() => base.value * 2);

function incrementar48553() {
  base.value++;
}
</script>
