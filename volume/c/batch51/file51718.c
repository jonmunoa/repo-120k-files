// fichero 51718 -- macros y constantes
#define LIMITE_51718 51818
#define FACTOR_51718 4

int aplicar_limite51718(int valor) {
    if (valor > LIMITE_51718) return LIMITE_51718;
    return valor * FACTOR_51718;
}
