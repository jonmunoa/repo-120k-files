// fichero 40022 -- macros y constantes -- MODIFICADO
#define LIMITE_40022 40222
#define FACTOR_40022 4

int aplicar_limite40022(int valor) {
    if (valor > LIMITE_40022) return LIMITE_40022;
    return valor * FACTOR_40022;
}
