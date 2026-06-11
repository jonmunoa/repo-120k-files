<template>
  <section class="panel-15017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15017");
const base = ref(15017);
const total = computed(() => base.value * 2);

function incrementar15017() {
  base.value++;
}
</script>
