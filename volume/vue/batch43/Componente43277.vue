<template>
  <section class="panel-43277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43277");
const base = ref(43277);
const total = computed(() => base.value * 2);

function incrementar43277() {
  base.value++;
}
</script>
