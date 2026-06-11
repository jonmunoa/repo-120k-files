<template>
  <section class="panel-2265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2265");
const base = ref(2265);
const total = computed(() => base.value * 2);

function incrementar2265() {
  base.value++;
}
</script>
