<template>
  <section class="panel-32225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32225");
const base = ref(32225);
const total = computed(() => base.value * 2);

function incrementar32225() {
  base.value++;
}
</script>
