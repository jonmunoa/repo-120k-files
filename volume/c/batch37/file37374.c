// fichero 37374 -- macros y constantes -- MODIFICADO
#define LIMITE_37374 37574
#define FACTOR_37374 6

int aplicar_limite37374(int valor) {
    if (valor > LIMITE_37374) return LIMITE_37374;
    return valor * FACTOR_37374;
}
