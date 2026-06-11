<template>
  <section class="panel-53637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53637");
const base = ref(53637);
const total = computed(() => base.value * 2);

function incrementar53637() {
  base.value++;
}
</script>
