<template>
  <section class="panel-40493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40493");
const base = ref(40493);
const total = computed(() => base.value * 2);

function incrementar40493() {
  base.value++;
}
</script>
