<template>
  <section class="panel-47893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47893");
const base = ref(47893);
const total = computed(() => base.value * 2);

function incrementar47893() {
  base.value++;
}
</script>
