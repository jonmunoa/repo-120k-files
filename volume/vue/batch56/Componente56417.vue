<template>
  <section class="panel-56417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56417");
const base = ref(56417);
const total = computed(() => base.value * 2);

function incrementar56417() {
  base.value++;
}
</script>
