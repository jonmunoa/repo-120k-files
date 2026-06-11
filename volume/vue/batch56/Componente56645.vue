<template>
  <section class="panel-56645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56645");
const base = ref(56645);
const total = computed(() => base.value * 2);

function incrementar56645() {
  base.value++;
}
</script>
