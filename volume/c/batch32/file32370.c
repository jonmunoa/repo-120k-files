// fichero 32370 -- macros y constantes -- MODIFICADO
#define LIMITE_32370 32570
#define FACTOR_32370 2

int aplicar_limite32370(int valor) {
    if (valor > LIMITE_32370) return LIMITE_32370;
    return valor * FACTOR_32370;
}
