<template>
  <section class="panel-10705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10705");
const base = ref(10705);
const total = computed(() => base.value * 2);

function incrementar10705() {
  base.value++;
}
</script>
