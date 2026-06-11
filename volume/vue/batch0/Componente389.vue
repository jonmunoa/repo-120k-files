<template>
  <section class="panel-389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 389");
const base = ref(389);
const total = computed(() => base.value * 2);

function incrementar389() {
  base.value++;
}
</script>
