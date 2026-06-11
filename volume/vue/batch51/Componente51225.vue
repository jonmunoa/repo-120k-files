<template>
  <section class="panel-51225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51225");
const base = ref(51225);
const total = computed(() => base.value * 2);

function incrementar51225() {
  base.value++;
}
</script>
