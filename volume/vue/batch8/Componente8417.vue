<template>
  <section class="panel-8417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8417");
const base = ref(8417);
const total = computed(() => base.value * 2);

function incrementar8417() {
  base.value++;
}
</script>
