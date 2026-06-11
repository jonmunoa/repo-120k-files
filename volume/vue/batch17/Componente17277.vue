<template>
  <section class="panel-17277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17277");
const base = ref(17277);
const total = computed(() => base.value * 2);

function incrementar17277() {
  base.value++;
}
</script>
