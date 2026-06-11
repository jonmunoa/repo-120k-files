<template>
  <section class="panel-26737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26737");
const base = ref(26737);
const total = computed(() => base.value * 2);

function incrementar26737() {
  base.value++;
}
</script>
