// fichero 48858 -- macros y constantes
#define LIMITE_48858 48958
#define FACTOR_48858 4

int aplicar_limite48858(int valor) {
    if (valor > LIMITE_48858) return LIMITE_48858;
    return valor * FACTOR_48858;
}
