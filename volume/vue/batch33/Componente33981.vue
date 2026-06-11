<template>
  <section class="panel-33981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33981");
const base = ref(33981);
const total = computed(() => base.value * 2);

function incrementar33981() {
  base.value++;
}
</script>
