<template>
  <section class="panel-33673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33673");
const base = ref(33673);
const total = computed(() => base.value * 2);

function incrementar33673() {
  base.value++;
}
</script>
