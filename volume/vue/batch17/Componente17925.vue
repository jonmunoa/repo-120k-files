<template>
  <section class="panel-17925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17925");
const base = ref(17925);
const total = computed(() => base.value * 2);

function incrementar17925() {
  base.value++;
}
</script>
