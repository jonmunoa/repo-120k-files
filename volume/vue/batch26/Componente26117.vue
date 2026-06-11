<template>
  <section class="panel-26117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26117");
const base = ref(26117);
const total = computed(() => base.value * 2);

function incrementar26117() {
  base.value++;
}
</script>
