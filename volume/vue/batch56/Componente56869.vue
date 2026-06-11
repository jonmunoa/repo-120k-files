<template>
  <section class="panel-56869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56869");
const base = ref(56869);
const total = computed(() => base.value * 2);

function incrementar56869() {
  base.value++;
}
</script>
