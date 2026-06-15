// fichero 48374 -- macros y constantes -- MODIFICADO
#define LIMITE_48374 48574
#define FACTOR_48374 6

int aplicar_limite48374(int valor) {
    if (valor > LIMITE_48374) return LIMITE_48374;
    return valor * FACTOR_48374;
}
