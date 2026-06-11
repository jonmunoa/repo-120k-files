<template>
  <section class="panel-53645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53645");
const base = ref(53645);
const total = computed(() => base.value * 2);

function incrementar53645() {
  base.value++;
}
</script>
