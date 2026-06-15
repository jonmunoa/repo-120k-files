// fichero 12362 -- macros y constantes -- MODIFICADO
#define LIMITE_12362 12562
#define FACTOR_12362 4

int aplicar_limite12362(int valor) {
    if (valor > LIMITE_12362) return LIMITE_12362;
    return valor * FACTOR_12362;
}
