<template>
  <section class="panel-34053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34053");
const base = ref(34053);
const total = computed(() => base.value * 2);

function incrementar34053() {
  base.value++;
}
</script>
