// fichero 29254 -- macros y constantes -- MODIFICADO
#define LIMITE_29254 29454
#define FACTOR_29254 6

int aplicar_limite29254(int valor) {
    if (valor > LIMITE_29254) return LIMITE_29254;
    return valor * FACTOR_29254;
}
