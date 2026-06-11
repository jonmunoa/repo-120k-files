<template>
  <section class="panel-50637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50637");
const base = ref(50637);
const total = computed(() => base.value * 2);

function incrementar50637() {
  base.value++;
}
</script>
