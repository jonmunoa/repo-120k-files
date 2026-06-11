<template>
  <section class="panel-27017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27017");
const base = ref(27017);
const total = computed(() => base.value * 2);

function incrementar27017() {
  base.value++;
}
</script>
