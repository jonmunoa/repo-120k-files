<template>
  <section class="panel-27637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27637");
const base = ref(27637);
const total = computed(() => base.value * 2);

function incrementar27637() {
  base.value++;
}
</script>
