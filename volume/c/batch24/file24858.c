// fichero 24858 -- macros y constantes
#define LIMITE_24858 24958
#define FACTOR_24858 4

int aplicar_limite24858(int valor) {
    if (valor > LIMITE_24858) return LIMITE_24858;
    return valor * FACTOR_24858;
}
