<template>
  <section class="panel-43537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43537");
const base = ref(43537);
const total = computed(() => base.value * 2);

function incrementar43537() {
  base.value++;
}
</script>
