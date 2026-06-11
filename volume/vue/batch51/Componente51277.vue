<template>
  <section class="panel-51277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51277");
const base = ref(51277);
const total = computed(() => base.value * 2);

function incrementar51277() {
  base.value++;
}
</script>
