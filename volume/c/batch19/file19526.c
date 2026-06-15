// fichero 19526 -- macros y constantes -- MODIFICADO
#define LIMITE_19526 19726
#define FACTOR_19526 3

int aplicar_limite19526(int valor) {
    if (valor > LIMITE_19526) return LIMITE_19526;
    return valor * FACTOR_19526;
}
