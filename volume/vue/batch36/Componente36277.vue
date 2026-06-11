<template>
  <section class="panel-36277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36277");
const base = ref(36277);
const total = computed(() => base.value * 2);

function incrementar36277() {
  base.value++;
}
</script>
