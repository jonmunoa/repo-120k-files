<template>
  <section class="panel-26105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26105");
const base = ref(26105);
const total = computed(() => base.value * 2);

function incrementar26105() {
  base.value++;
}
</script>
