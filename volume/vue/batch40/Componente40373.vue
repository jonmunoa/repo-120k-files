<template>
  <section class="panel-40373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40373");
const base = ref(40373);
const total = computed(() => base.value * 2);

function incrementar40373() {
  base.value++;
}
</script>
