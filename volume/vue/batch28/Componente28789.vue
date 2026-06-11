<template>
  <section class="panel-28789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28789");
const base = ref(28789);
const total = computed(() => base.value * 2);

function incrementar28789() {
  base.value++;
}
</script>
