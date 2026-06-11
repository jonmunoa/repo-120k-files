<template>
  <section class="panel-28621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28621");
const base = ref(28621);
const total = computed(() => base.value * 2);

function incrementar28621() {
  base.value++;
}
</script>
