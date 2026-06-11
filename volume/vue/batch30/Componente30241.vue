<template>
  <section class="panel-30241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30241");
const base = ref(30241);
const total = computed(() => base.value * 2);

function incrementar30241() {
  base.value++;
}
</script>
