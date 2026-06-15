// fichero 6542 -- macros y constantes -- MODIFICADO
#define LIMITE_6542 6742
#define FACTOR_6542 4

int aplicar_limite6542(int valor) {
    if (valor > LIMITE_6542) return LIMITE_6542;
    return valor * FACTOR_6542;
}
