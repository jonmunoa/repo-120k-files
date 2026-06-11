<template>
  <section class="panel-28869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28869");
const base = ref(28869);
const total = computed(() => base.value * 2);

function incrementar28869() {
  base.value++;
}
</script>
