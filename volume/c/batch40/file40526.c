// fichero 40526 -- macros y constantes -- MODIFICADO
#define LIMITE_40526 40726
#define FACTOR_40526 3

int aplicar_limite40526(int valor) {
    if (valor > LIMITE_40526) return LIMITE_40526;
    return valor * FACTOR_40526;
}
