<template>
  <section class="panel-36869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36869");
const base = ref(36869);
const total = computed(() => base.value * 2);

function incrementar36869() {
  base.value++;
}
</script>
