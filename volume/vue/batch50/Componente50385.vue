<template>
  <section class="panel-50385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50385");
const base = ref(50385);
const total = computed(() => base.value * 2);

function incrementar50385() {
  base.value++;
}
</script>
