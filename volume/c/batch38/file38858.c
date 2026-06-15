// fichero 38858 -- macros y constantes -- MODIFICADO
#define LIMITE_38858 39058
#define FACTOR_38858 5

int aplicar_limite38858(int valor) {
    if (valor > LIMITE_38858) return LIMITE_38858;
    return valor * FACTOR_38858;
}
