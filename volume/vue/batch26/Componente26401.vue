<template>
  <section class="panel-26401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26401");
const base = ref(26401);
const total = computed(() => base.value * 2);

function incrementar26401() {
  base.value++;
}
</script>
