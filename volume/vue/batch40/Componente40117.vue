<template>
  <section class="panel-40117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40117");
const base = ref(40117);
const total = computed(() => base.value * 2);

function incrementar40117() {
  base.value++;
}
</script>
