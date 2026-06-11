<template>
  <section class="panel-30225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30225");
const base = ref(30225);
const total = computed(() => base.value * 2);

function incrementar30225() {
  base.value++;
}
</script>
