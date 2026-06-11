<template>
  <section class="panel-54537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54537");
const base = ref(54537);
const total = computed(() => base.value * 2);

function incrementar54537() {
  base.value++;
}
</script>
