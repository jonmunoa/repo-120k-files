<template>
  <section class="panel-37277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37277");
const base = ref(37277);
const total = computed(() => base.value * 2);

function incrementar37277() {
  base.value++;
}
</script>
