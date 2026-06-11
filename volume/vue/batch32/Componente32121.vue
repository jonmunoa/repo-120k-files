<template>
  <section class="panel-32121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32121");
const base = ref(32121);
const total = computed(() => base.value * 2);

function incrementar32121() {
  base.value++;
}
</script>
