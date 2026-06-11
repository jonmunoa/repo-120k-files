<template>
  <section class="panel-55493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55493");
const base = ref(55493);
const total = computed(() => base.value * 2);

function incrementar55493() {
  base.value++;
}
</script>
