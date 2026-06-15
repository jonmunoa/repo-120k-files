// fichero 29362 -- macros y constantes -- MODIFICADO
#define LIMITE_29362 29562
#define FACTOR_29362 4

int aplicar_limite29362(int valor) {
    if (valor > LIMITE_29362) return LIMITE_29362;
    return valor * FACTOR_29362;
}
