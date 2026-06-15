// fichero 45374 -- macros y constantes -- MODIFICADO
#define LIMITE_45374 45574
#define FACTOR_45374 6

int aplicar_limite45374(int valor) {
    if (valor > LIMITE_45374) return LIMITE_45374;
    return valor * FACTOR_45374;
}
