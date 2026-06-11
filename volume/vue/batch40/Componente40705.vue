<template>
  <section class="panel-40705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40705");
const base = ref(40705);
const total = computed(() => base.value * 2);

function incrementar40705() {
  base.value++;
}
</script>
