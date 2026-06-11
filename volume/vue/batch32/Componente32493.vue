<template>
  <section class="panel-32493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32493");
const base = ref(32493);
const total = computed(() => base.value * 2);

function incrementar32493() {
  base.value++;
}
</script>
