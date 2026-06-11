<template>
  <section class="panel-26849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26849");
const base = ref(26849);
const total = computed(() => base.value * 2);

function incrementar26849() {
  base.value++;
}
</script>
