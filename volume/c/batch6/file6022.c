// fichero 6022 -- macros y constantes -- MODIFICADO
#define LIMITE_6022 6222
#define FACTOR_6022 4

int aplicar_limite6022(int valor) {
    if (valor > LIMITE_6022) return LIMITE_6022;
    return valor * FACTOR_6022;
}
