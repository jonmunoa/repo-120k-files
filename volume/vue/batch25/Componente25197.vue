<template>
  <section class="panel-25197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25197");
const base = ref(25197);
const total = computed(() => base.value * 2);

function incrementar25197() {
  base.value++;
}
</script>
