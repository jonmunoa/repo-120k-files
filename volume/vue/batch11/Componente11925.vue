<template>
  <section class="panel-11925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11925");
const base = ref(11925);
const total = computed(() => base.value * 2);

function incrementar11925() {
  base.value++;
}
</script>
