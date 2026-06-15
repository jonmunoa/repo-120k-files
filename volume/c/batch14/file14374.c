// fichero 14374 -- macros y constantes -- MODIFICADO
#define LIMITE_14374 14574
#define FACTOR_14374 6

int aplicar_limite14374(int valor) {
    if (valor > LIMITE_14374) return LIMITE_14374;
    return valor * FACTOR_14374;
}
