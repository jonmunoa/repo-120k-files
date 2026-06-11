<template>
  <section class="panel-28193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28193");
const base = ref(28193);
const total = computed(() => base.value * 2);

function incrementar28193() {
  base.value++;
}
</script>
