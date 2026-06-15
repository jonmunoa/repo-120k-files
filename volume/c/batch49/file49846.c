// fichero 49846 -- macros y constantes -- MODIFICADO
#define LIMITE_49846 50046
#define FACTOR_49846 3

int aplicar_limite49846(int valor) {
    if (valor > LIMITE_49846) return LIMITE_49846;
    return valor * FACTOR_49846;
}
