<template>
  <section class="panel-26089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26089");
const base = ref(26089);
const total = computed(() => base.value * 2);

function incrementar26089() {
  base.value++;
}
</script>
