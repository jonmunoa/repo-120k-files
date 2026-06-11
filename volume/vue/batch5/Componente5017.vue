<template>
  <section class="panel-5017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5017");
const base = ref(5017);
const total = computed(() => base.value * 2);

function incrementar5017() {
  base.value++;
}
</script>
