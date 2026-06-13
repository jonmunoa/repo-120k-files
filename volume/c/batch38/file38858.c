// fichero 38858 -- macros y constantes
#define LIMITE_38858 38958
#define FACTOR_38858 4

int aplicar_limite38858(int valor) {
    if (valor > LIMITE_38858) return LIMITE_38858;
    return valor * FACTOR_38858;
}
