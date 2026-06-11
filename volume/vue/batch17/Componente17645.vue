<template>
  <section class="panel-17645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17645");
const base = ref(17645);
const total = computed(() => base.value * 2);

function incrementar17645() {
  base.value++;
}
</script>
