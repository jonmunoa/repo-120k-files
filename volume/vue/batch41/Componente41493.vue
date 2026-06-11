<template>
  <section class="panel-41493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41493");
const base = ref(41493);
const total = computed(() => base.value * 2);

function incrementar41493() {
  base.value++;
}
</script>
