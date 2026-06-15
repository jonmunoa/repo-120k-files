// fichero 45022 -- macros y constantes -- MODIFICADO
#define LIMITE_45022 45222
#define FACTOR_45022 4

int aplicar_limite45022(int valor) {
    if (valor > LIMITE_45022) return LIMITE_45022;
    return valor * FACTOR_45022;
}
