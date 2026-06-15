// fichero 49490 -- macros y constantes -- MODIFICADO
#define LIMITE_49490 49690
#define FACTOR_49490 2

int aplicar_limite49490(int valor) {
    if (valor > LIMITE_49490) return LIMITE_49490;
    return valor * FACTOR_49490;
}
