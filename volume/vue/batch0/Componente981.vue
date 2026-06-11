<template>
  <section class="panel-981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 981");
const base = ref(981);
const total = computed(() => base.value * 2);

function incrementar981() {
  base.value++;
}
</script>
