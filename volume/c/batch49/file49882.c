// fichero 49882 -- macros y constantes -- MODIFICADO
#define LIMITE_49882 50082
#define FACTOR_49882 4

int aplicar_limite49882(int valor) {
    if (valor > LIMITE_49882) return LIMITE_49882;
    return valor * FACTOR_49882;
}
