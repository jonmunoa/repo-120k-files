<template>
  <section class="panel-55497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55497");
const base = ref(55497);
const total = computed(() => base.value * 2);

function incrementar55497() {
  base.value++;
}
</script>
