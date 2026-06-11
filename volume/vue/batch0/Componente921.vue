<template>
  <section class="panel-921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 921");
const base = ref(921);
const total = computed(() => base.value * 2);

function incrementar921() {
  base.value++;
}
</script>
