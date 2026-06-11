<template>
  <section class="panel-24497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24497");
const base = ref(24497);
const total = computed(() => base.value * 2);

function incrementar24497() {
  base.value++;
}
</script>
