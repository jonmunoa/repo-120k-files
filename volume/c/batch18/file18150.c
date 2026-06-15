// fichero 18150 -- macros y constantes -- MODIFICADO
#define LIMITE_18150 18350
#define FACTOR_18150 2

int aplicar_limite18150(int valor) {
    if (valor > LIMITE_18150) return LIMITE_18150;
    return valor * FACTOR_18150;
}
