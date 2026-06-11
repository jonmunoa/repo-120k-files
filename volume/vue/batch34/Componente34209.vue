<template>
  <section class="panel-34209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34209");
const base = ref(34209);
const total = computed(() => base.value * 2);

function incrementar34209() {
  base.value++;
}
</script>
