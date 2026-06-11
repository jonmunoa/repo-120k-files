<template>
  <section class="panel-30537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30537");
const base = ref(30537);
const total = computed(() => base.value * 2);

function incrementar30537() {
  base.value++;
}
</script>
