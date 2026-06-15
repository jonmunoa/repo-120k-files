// fichero 358 -- macros y constantes -- MODIFICADO
#define LIMITE_358 558
#define FACTOR_358 5

int aplicar_limite358(int valor) {
    if (valor > LIMITE_358) return LIMITE_358;
    return valor * FACTOR_358;
}
