<template>
  <section class="panel-28493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28493");
const base = ref(28493);
const total = computed(() => base.value * 2);

function incrementar28493() {
  base.value++;
}
</script>
