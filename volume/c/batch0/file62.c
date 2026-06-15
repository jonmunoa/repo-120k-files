// fichero 62 -- macros y constantes -- MODIFICADO
#define LIMITE_62 262
#define FACTOR_62 4

int aplicar_limite62(int valor) {
    if (valor > LIMITE_62) return LIMITE_62;
    return valor * FACTOR_62;
}
