// fichero 38358 -- macros y constantes -- MODIFICADO
#define LIMITE_38358 38558
#define FACTOR_38358 5

int aplicar_limite38358(int valor) {
    if (valor > LIMITE_38358) return LIMITE_38358;
    return valor * FACTOR_38358;
}
