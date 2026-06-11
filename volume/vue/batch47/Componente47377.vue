<template>
  <section class="panel-47377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47377");
const base = ref(47377);
const total = computed(() => base.value * 2);

function incrementar47377() {
  base.value++;
}
</script>
