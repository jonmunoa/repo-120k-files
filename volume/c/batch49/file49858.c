// fichero 49858 -- macros y constantes -- MODIFICADO
#define LIMITE_49858 50058
#define FACTOR_49858 5

int aplicar_limite49858(int valor) {
    if (valor > LIMITE_49858) return LIMITE_49858;
    return valor * FACTOR_49858;
}
