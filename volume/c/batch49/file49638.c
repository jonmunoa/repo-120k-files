// fichero 49638 -- macros y constantes -- MODIFICADO
#define LIMITE_49638 49838
#define FACTOR_49638 5

int aplicar_limite49638(int valor) {
    if (valor > LIMITE_49638) return LIMITE_49638;
    return valor * FACTOR_49638;
}
