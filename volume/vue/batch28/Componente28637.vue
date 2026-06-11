<template>
  <section class="panel-28637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28637");
const base = ref(28637);
const total = computed(() => base.value * 2);

function incrementar28637() {
  base.value++;
}
</script>
