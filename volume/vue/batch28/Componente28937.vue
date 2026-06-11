<template>
  <section class="panel-28937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28937");
const base = ref(28937);
const total = computed(() => base.value * 2);

function incrementar28937() {
  base.value++;
}
</script>
