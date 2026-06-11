<template>
  <section class="panel-24209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24209");
const base = ref(24209);
const total = computed(() => base.value * 2);

function incrementar24209() {
  base.value++;
}
</script>
