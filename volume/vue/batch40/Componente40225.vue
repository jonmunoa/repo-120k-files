<template>
  <section class="panel-40225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40225");
const base = ref(40225);
const total = computed(() => base.value * 2);

function incrementar40225() {
  base.value++;
}
</script>
