<template>
  <section class="panel-8637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8637");
const base = ref(8637);
const total = computed(() => base.value * 2);

function incrementar8637() {
  base.value++;
}
</script>
