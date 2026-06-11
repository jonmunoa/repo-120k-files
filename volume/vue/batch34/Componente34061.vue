<template>
  <section class="panel-34061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34061");
const base = ref(34061);
const total = computed(() => base.value * 2);

function incrementar34061() {
  base.value++;
}
</script>
