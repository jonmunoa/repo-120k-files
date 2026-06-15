// fichero 19858 -- macros y constantes -- MODIFICADO
#define LIMITE_19858 20058
#define FACTOR_19858 5

int aplicar_limite19858(int valor) {
    if (valor > LIMITE_19858) return LIMITE_19858;
    return valor * FACTOR_19858;
}
