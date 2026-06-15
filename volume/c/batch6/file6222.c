// fichero 6222 -- macros y constantes -- MODIFICADO
#define LIMITE_6222 6422
#define FACTOR_6222 4

int aplicar_limite6222(int valor) {
    if (valor > LIMITE_6222) return LIMITE_6222;
    return valor * FACTOR_6222;
}
