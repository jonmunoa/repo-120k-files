<template>
  <section class="panel-29869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29869");
const base = ref(29869);
const total = computed(() => base.value * 2);

function incrementar29869() {
  base.value++;
}
</script>
