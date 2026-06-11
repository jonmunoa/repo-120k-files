<template>
  <section class="panel-28289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28289");
const base = ref(28289);
const total = computed(() => base.value * 2);

function incrementar28289() {
  base.value++;
}
</script>
