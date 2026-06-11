<template>
  <section class="panel-2277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2277");
const base = ref(2277);
const total = computed(() => base.value * 2);

function incrementar2277() {
  base.value++;
}
</script>
