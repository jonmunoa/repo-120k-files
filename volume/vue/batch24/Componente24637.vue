<template>
  <section class="panel-24637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24637");
const base = ref(24637);
const total = computed(() => base.value * 2);

function incrementar24637() {
  base.value++;
}
</script>
