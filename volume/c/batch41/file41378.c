// fichero 41378 -- macros y constantes -- MODIFICADO
#define LIMITE_41378 41578
#define FACTOR_41378 5

int aplicar_limite41378(int valor) {
    if (valor > LIMITE_41378) return LIMITE_41378;
    return valor * FACTOR_41378;
}
