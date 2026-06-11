<template>
  <section class="panel-25925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25925");
const base = ref(25925);
const total = computed(() => base.value * 2);

function incrementar25925() {
  base.value++;
}
</script>
