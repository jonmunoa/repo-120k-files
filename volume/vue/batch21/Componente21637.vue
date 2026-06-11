<template>
  <section class="panel-21637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21637");
const base = ref(21637);
const total = computed(() => base.value * 2);

function incrementar21637() {
  base.value++;
}
</script>
