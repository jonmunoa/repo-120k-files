// fichero 8374 -- macros y constantes -- MODIFICADO
#define LIMITE_8374 8574
#define FACTOR_8374 6

int aplicar_limite8374(int valor) {
    if (valor > LIMITE_8374) return LIMITE_8374;
    return valor * FACTOR_8374;
}
