<template>
  <section class="panel-31869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31869");
const base = ref(31869);
const total = computed(() => base.value * 2);

function incrementar31869() {
  base.value++;
}
</script>
