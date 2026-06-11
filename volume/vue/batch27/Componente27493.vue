<template>
  <section class="panel-27493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27493");
const base = ref(27493);
const total = computed(() => base.value * 2);

function incrementar27493() {
  base.value++;
}
</script>
