<template>
  <section class="panel-14417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14417");
const base = ref(14417);
const total = computed(() => base.value * 2);

function incrementar14417() {
  base.value++;
}
</script>
