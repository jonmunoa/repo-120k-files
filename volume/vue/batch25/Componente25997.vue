<template>
  <section class="panel-25997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25997");
const base = ref(25997);
const total = computed(() => base.value * 2);

function incrementar25997() {
  base.value++;
}
</script>
