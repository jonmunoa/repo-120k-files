// fichero 18350 -- macros y constantes -- MODIFICADO
#define LIMITE_18350 18550
#define FACTOR_18350 2

int aplicar_limite18350(int valor) {
    if (valor > LIMITE_18350) return LIMITE_18350;
    return valor * FACTOR_18350;
}
