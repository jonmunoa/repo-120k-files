// fichero 4374 -- macros y constantes -- MODIFICADO
#define LIMITE_4374 4574
#define FACTOR_4374 6

int aplicar_limite4374(int valor) {
    if (valor > LIMITE_4374) return LIMITE_4374;
    return valor * FACTOR_4374;
}
