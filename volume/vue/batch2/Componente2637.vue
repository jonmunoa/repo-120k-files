<template>
  <section class="panel-2637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2637");
const base = ref(2637);
const total = computed(() => base.value * 2);

function incrementar2637() {
  base.value++;
}
</script>
