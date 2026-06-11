<template>
  <section class="panel-10737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10737");
const base = ref(10737);
const total = computed(() => base.value * 2);

function incrementar10737() {
  base.value++;
}
</script>
