<template>
  <section class="panel-27169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27169");
const base = ref(27169);
const total = computed(() => base.value * 2);

function incrementar27169() {
  base.value++;
}
</script>
