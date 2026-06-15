// fichero 18450 -- macros y constantes -- MODIFICADO
#define LIMITE_18450 18650
#define FACTOR_18450 2

int aplicar_limite18450(int valor) {
    if (valor > LIMITE_18450) return LIMITE_18450;
    return valor * FACTOR_18450;
}
