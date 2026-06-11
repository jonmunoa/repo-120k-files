<template>
  <section class="panel-8941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8941");
const base = ref(8941);
const total = computed(() => base.value * 2);

function incrementar8941() {
  base.value++;
}
</script>
