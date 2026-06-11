<template>
  <section class="panel-8945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8945");
const base = ref(8945);
const total = computed(() => base.value * 2);

function incrementar8945() {
  base.value++;
}
</script>
