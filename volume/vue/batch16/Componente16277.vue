<template>
  <section class="panel-16277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16277");
const base = ref(16277);
const total = computed(() => base.value * 2);

function incrementar16277() {
  base.value++;
}
</script>
