<template>
  <section class="panel-11969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11969");
const base = ref(11969);
const total = computed(() => base.value * 2);

function incrementar11969() {
  base.value++;
}
</script>
