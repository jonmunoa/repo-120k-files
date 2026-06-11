<template>
  <section class="panel-56497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56497");
const base = ref(56497);
const total = computed(() => base.value * 2);

function incrementar56497() {
  base.value++;
}
</script>
