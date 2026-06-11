<template>
  <section class="panel-3869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3869");
const base = ref(3869);
const total = computed(() => base.value * 2);

function incrementar3869() {
  base.value++;
}
</script>
