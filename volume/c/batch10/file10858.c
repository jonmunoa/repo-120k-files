// fichero 10858 -- macros y constantes -- MODIFICADO
#define LIMITE_10858 11058
#define FACTOR_10858 5

int aplicar_limite10858(int valor) {
    if (valor > LIMITE_10858) return LIMITE_10858;
    return valor * FACTOR_10858;
}
