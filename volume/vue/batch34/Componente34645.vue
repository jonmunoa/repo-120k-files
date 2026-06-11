<template>
  <section class="panel-34645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34645");
const base = ref(34645);
const total = computed(() => base.value * 2);

function incrementar34645() {
  base.value++;
}
</script>
