<template>
  <section class="panel-27161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27161");
const base = ref(27161);
const total = computed(() => base.value * 2);

function incrementar27161() {
  base.value++;
}
</script>
