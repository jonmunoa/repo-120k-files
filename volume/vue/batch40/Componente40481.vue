<template>
  <section class="panel-40481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40481");
const base = ref(40481);
const total = computed(() => base.value * 2);

function incrementar40481() {
  base.value++;
}
</script>
