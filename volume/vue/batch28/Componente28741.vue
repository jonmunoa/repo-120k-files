<template>
  <section class="panel-28741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28741");
const base = ref(28741);
const total = computed(() => base.value * 2);

function incrementar28741() {
  base.value++;
}
</script>
