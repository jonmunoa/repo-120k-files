<template>
  <section class="panel-32101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32101");
const base = ref(32101);
const total = computed(() => base.value * 2);

function incrementar32101() {
  base.value++;
}
</script>
