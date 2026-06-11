<template>
  <section class="panel-8261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8261");
const base = ref(8261);
const total = computed(() => base.value * 2);

function incrementar8261() {
  base.value++;
}
</script>
