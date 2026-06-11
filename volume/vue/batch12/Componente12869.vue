<template>
  <section class="panel-12869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12869");
const base = ref(12869);
const total = computed(() => base.value * 2);

function incrementar12869() {
  base.value++;
}
</script>
