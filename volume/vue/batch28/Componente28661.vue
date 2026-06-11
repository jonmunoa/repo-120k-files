<template>
  <section class="panel-28661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28661");
const base = ref(28661);
const total = computed(() => base.value * 2);

function incrementar28661() {
  base.value++;
}
</script>
