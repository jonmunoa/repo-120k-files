<template>
  <section class="panel-34505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34505");
const base = ref(34505);
const total = computed(() => base.value * 2);

function incrementar34505() {
  base.value++;
}
</script>
