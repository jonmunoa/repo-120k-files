// fichero 38374 -- macros y constantes
#define LIMITE_38374 38474
#define FACTOR_38374 5

int aplicar_limite38374(int valor) {
    if (valor > LIMITE_38374) return LIMITE_38374;
    return valor * FACTOR_38374;
}
