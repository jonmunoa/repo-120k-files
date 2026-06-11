<template>
  <section class="panel-47493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47493");
const base = ref(47493);
const total = computed(() => base.value * 2);

function incrementar47493() {
  base.value++;
}
</script>
