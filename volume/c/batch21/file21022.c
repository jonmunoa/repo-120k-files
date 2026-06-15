// fichero 21022 -- macros y constantes -- MODIFICADO
#define LIMITE_21022 21222
#define FACTOR_21022 4

int aplicar_limite21022(int valor) {
    if (valor > LIMITE_21022) return LIMITE_21022;
    return valor * FACTOR_21022;
}
