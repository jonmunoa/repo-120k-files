// fichero 23374 -- macros y constantes -- MODIFICADO
#define LIMITE_23374 23574
#define FACTOR_23374 6

int aplicar_limite23374(int valor) {
    if (valor > LIMITE_23374) return LIMITE_23374;
    return valor * FACTOR_23374;
}
