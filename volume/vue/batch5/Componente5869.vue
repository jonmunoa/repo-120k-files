<template>
  <section class="panel-5869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5869");
const base = ref(5869);
const total = computed(() => base.value * 2);

function incrementar5869() {
  base.value++;
}
</script>
