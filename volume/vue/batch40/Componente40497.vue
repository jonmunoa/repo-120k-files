<template>
  <section class="panel-40497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40497");
const base = ref(40497);
const total = computed(() => base.value * 2);

function incrementar40497() {
  base.value++;
}
</script>
