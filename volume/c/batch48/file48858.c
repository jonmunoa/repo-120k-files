// fichero 48858 -- macros y constantes -- MODIFICADO
#define LIMITE_48858 49058
#define FACTOR_48858 5

int aplicar_limite48858(int valor) {
    if (valor > LIMITE_48858) return LIMITE_48858;
    return valor * FACTOR_48858;
}
