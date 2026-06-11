<template>
  <section class="panel-47637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47637");
const base = ref(47637);
const total = computed(() => base.value * 2);

function incrementar47637() {
  base.value++;
}
</script>
