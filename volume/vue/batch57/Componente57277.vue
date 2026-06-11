<template>
  <section class="panel-57277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57277");
const base = ref(57277);
const total = computed(() => base.value * 2);

function incrementar57277() {
  base.value++;
}
</script>
