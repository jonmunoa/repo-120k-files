<template>
  <section class="panel-34493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34493");
const base = ref(34493);
const total = computed(() => base.value * 2);

function incrementar34493() {
  base.value++;
}
</script>
