<template>
  <section class="panel-17637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17637");
const base = ref(17637);
const total = computed(() => base.value * 2);

function incrementar17637() {
  base.value++;
}
</script>
