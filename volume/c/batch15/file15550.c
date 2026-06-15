// fichero 15550 -- macros y constantes -- MODIFICADO
#define LIMITE_15550 15750
#define FACTOR_15550 2

int aplicar_limite15550(int valor) {
    if (valor > LIMITE_15550) return LIMITE_15550;
    return valor * FACTOR_15550;
}
