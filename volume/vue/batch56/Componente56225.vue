<template>
  <section class="panel-56225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56225");
const base = ref(56225);
const total = computed(() => base.value * 2);

function incrementar56225() {
  base.value++;
}
</script>
