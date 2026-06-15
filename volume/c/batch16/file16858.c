// fichero 16858 -- macros y constantes -- MODIFICADO
#define LIMITE_16858 17058
#define FACTOR_16858 5

int aplicar_limite16858(int valor) {
    if (valor > LIMITE_16858) return LIMITE_16858;
    return valor * FACTOR_16858;
}
