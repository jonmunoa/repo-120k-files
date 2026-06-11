<template>
  <section class="panel-11493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11493");
const base = ref(11493);
const total = computed(() => base.value * 2);

function incrementar11493() {
  base.value++;
}
</script>
