<template>
  <section class="panel-12969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12969");
const base = ref(12969);
const total = computed(() => base.value * 2);

function incrementar12969() {
  base.value++;
}
</script>
