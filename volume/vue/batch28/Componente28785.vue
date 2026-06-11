<template>
  <section class="panel-28785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28785");
const base = ref(28785);
const total = computed(() => base.value * 2);

function incrementar28785() {
  base.value++;
}
</script>
