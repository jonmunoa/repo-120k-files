<template>
  <section class="panel-11645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11645");
const base = ref(11645);
const total = computed(() => base.value * 2);

function incrementar11645() {
  base.value++;
}
</script>
