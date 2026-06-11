<template>
  <section class="panel-22373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22373");
const base = ref(22373);
const total = computed(() => base.value * 2);

function incrementar22373() {
  base.value++;
}
</script>
