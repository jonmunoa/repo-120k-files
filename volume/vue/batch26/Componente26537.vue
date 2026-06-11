<template>
  <section class="panel-26537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26537");
const base = ref(26537);
const total = computed(() => base.value * 2);

function incrementar26537() {
  base.value++;
}
</script>
