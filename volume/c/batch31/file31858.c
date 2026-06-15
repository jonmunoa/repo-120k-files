// fichero 31858 -- macros y constantes -- MODIFICADO
#define LIMITE_31858 32058
#define FACTOR_31858 5

int aplicar_limite31858(int valor) {
    if (valor > LIMITE_31858) return LIMITE_31858;
    return valor * FACTOR_31858;
}
