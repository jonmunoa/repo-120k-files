<template>
  <section class="panel-11417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11417");
const base = ref(11417);
const total = computed(() => base.value * 2);

function incrementar11417() {
  base.value++;
}
</script>
