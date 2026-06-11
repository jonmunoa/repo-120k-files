<template>
  <section class="panel-35377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35377");
const base = ref(35377);
const total = computed(() => base.value * 2);

function incrementar35377() {
  base.value++;
}
</script>
