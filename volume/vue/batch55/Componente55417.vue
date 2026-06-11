<template>
  <section class="panel-55417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55417");
const base = ref(55417);
const total = computed(() => base.value * 2);

function incrementar55417() {
  base.value++;
}
</script>
