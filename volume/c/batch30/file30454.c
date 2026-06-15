// fichero 30454 -- macros y constantes -- MODIFICADO
#define LIMITE_30454 30654
#define FACTOR_30454 6

int aplicar_limite30454(int valor) {
    if (valor > LIMITE_30454) return LIMITE_30454;
    return valor * FACTOR_30454;
}
