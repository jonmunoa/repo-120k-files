<template>
  <section class="panel-31277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31277");
const base = ref(31277);
const total = computed(() => base.value * 2);

function incrementar31277() {
  base.value++;
}
</script>
