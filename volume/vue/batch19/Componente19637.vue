<template>
  <section class="panel-19637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19637");
const base = ref(19637);
const total = computed(() => base.value * 2);

function incrementar19637() {
  base.value++;
}
</script>
