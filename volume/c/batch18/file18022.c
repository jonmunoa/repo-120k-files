// fichero 18022 -- macros y constantes -- MODIFICADO
#define LIMITE_18022 18222
#define FACTOR_18022 4

int aplicar_limite18022(int valor) {
    if (valor > LIMITE_18022) return LIMITE_18022;
    return valor * FACTOR_18022;
}
