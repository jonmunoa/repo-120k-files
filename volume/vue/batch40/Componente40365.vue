<template>
  <section class="panel-40365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40365");
const base = ref(40365);
const total = computed(() => base.value * 2);

function incrementar40365() {
  base.value++;
}
</script>
