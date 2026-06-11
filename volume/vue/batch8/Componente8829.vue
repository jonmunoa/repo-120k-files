<template>
  <section class="panel-8829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8829");
const base = ref(8829);
const total = computed(() => base.value * 2);

function incrementar8829() {
  base.value++;
}
</script>
