<template>
  <section class="panel-17537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17537");
const base = ref(17537);
const total = computed(() => base.value * 2);

function incrementar17537() {
  base.value++;
}
</script>
