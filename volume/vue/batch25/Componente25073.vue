<template>
  <section class="panel-25073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25073");
const base = ref(25073);
const total = computed(() => base.value * 2);

function incrementar25073() {
  base.value++;
}
</script>
