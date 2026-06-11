<template>
  <section class="panel-9493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9493");
const base = ref(9493);
const total = computed(() => base.value * 2);

function incrementar9493() {
  base.value++;
}
</script>
