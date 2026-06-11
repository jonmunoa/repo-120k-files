<template>
  <section class="panel-36193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36193");
const base = ref(36193);
const total = computed(() => base.value * 2);

function incrementar36193() {
  base.value++;
}
</script>
