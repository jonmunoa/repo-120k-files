<template>
  <section class="panel-28961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28961");
const base = ref(28961);
const total = computed(() => base.value * 2);

function incrementar28961() {
  base.value++;
}
</script>
