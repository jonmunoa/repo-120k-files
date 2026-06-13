// fichero 38358 -- macros y constantes
#define LIMITE_38358 38458
#define FACTOR_38358 4

int aplicar_limite38358(int valor) {
    if (valor > LIMITE_38358) return LIMITE_38358;
    return valor * FACTOR_38358;
}
