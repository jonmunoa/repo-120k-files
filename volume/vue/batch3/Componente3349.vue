<template>
  <section class="panel-3349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3349");
const base = ref(3349);
const total = computed(() => base.value * 2);

function incrementar3349() {
  base.value++;
}
</script>
