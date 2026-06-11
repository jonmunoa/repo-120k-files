<template>
  <section class="panel-25761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25761");
const base = ref(25761);
const total = computed(() => base.value * 2);

function incrementar25761() {
  base.value++;
}
</script>
