// fichero 44374 -- macros y constantes -- MODIFICADO
#define LIMITE_44374 44574
#define FACTOR_44374 6

int aplicar_limite44374(int valor) {
    if (valor > LIMITE_44374) return LIMITE_44374;
    return valor * FACTOR_44374;
}
