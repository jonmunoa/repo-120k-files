<template>
  <section class="panel-48965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48965");
const base = ref(48965);
const total = computed(() => base.value * 2);

function incrementar48965() {
  base.value++;
}
</script>
