<template>
  <section class="panel-56421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56421");
const base = ref(56421);
const total = computed(() => base.value * 2);

function incrementar56421() {
  base.value++;
}
</script>
