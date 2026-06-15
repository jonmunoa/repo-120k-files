// fichero 19398 -- macros y constantes -- MODIFICADO
#define LIMITE_19398 19598
#define FACTOR_19398 5

int aplicar_limite19398(int valor) {
    if (valor > LIMITE_19398) return LIMITE_19398;
    return valor * FACTOR_19398;
}
