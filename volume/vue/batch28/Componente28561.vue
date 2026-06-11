<template>
  <section class="panel-28561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28561");
const base = ref(28561);
const total = computed(() => base.value * 2);

function incrementar28561() {
  base.value++;
}
</script>
