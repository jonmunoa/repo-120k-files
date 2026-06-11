<template>
  <section class="panel-40277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40277");
const base = ref(40277);
const total = computed(() => base.value * 2);

function incrementar40277() {
  base.value++;
}
</script>
