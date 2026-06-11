<template>
  <section class="panel-21537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21537");
const base = ref(21537);
const total = computed(() => base.value * 2);

function incrementar21537() {
  base.value++;
}
</script>
