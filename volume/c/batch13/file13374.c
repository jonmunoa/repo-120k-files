// fichero 13374 -- macros y constantes -- MODIFICADO
#define LIMITE_13374 13574
#define FACTOR_13374 6

int aplicar_limite13374(int valor) {
    if (valor > LIMITE_13374) return LIMITE_13374;
    return valor * FACTOR_13374;
}
