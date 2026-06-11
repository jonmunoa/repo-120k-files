<template>
  <section class="panel-56637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56637");
const base = ref(56637);
const total = computed(() => base.value * 2);

function incrementar56637() {
  base.value++;
}
</script>
