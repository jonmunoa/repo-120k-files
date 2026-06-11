<template>
  <section class="panel-51017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51017");
const base = ref(51017);
const total = computed(() => base.value * 2);

function incrementar51017() {
  base.value++;
}
</script>
