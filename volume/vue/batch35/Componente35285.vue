<template>
  <section class="panel-35285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35285");
const base = ref(35285);
const total = computed(() => base.value * 2);

function incrementar35285() {
  base.value++;
}
</script>
