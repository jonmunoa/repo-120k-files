<template>
  <section class="panel-35289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35289");
const base = ref(35289);
const total = computed(() => base.value * 2);

function incrementar35289() {
  base.value++;
}
</script>
