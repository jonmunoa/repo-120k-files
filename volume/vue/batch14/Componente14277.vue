<template>
  <section class="panel-14277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14277");
const base = ref(14277);
const total = computed(() => base.value * 2);

function incrementar14277() {
  base.value++;
}
</script>
