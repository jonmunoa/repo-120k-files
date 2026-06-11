<template>
  <section class="panel-30013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30013");
const base = ref(30013);
const total = computed(() => base.value * 2);

function incrementar30013() {
  base.value++;
}
</script>
