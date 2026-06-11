<template>
  <section class="panel-15869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15869");
const base = ref(15869);
const total = computed(() => base.value * 2);

function incrementar15869() {
  base.value++;
}
</script>
