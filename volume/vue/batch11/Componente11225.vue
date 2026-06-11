<template>
  <section class="panel-11225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11225");
const base = ref(11225);
const total = computed(() => base.value * 2);

function incrementar11225() {
  base.value++;
}
</script>
