<template>
  <section class="panel-49869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49869");
const base = ref(49869);
const total = computed(() => base.value * 2);

function incrementar49869() {
  base.value++;
}
</script>
