<template>
  <section class="panel-2493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2493");
const base = ref(2493);
const total = computed(() => base.value * 2);

function incrementar2493() {
  base.value++;
}
</script>
