<template>
  <section class="panel-35493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35493");
const base = ref(35493);
const total = computed(() => base.value * 2);

function incrementar35493() {
  base.value++;
}
</script>
