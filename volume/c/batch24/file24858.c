// fichero 24858 -- macros y constantes -- MODIFICADO
#define LIMITE_24858 25058
#define FACTOR_24858 5

int aplicar_limite24858(int valor) {
    if (valor > LIMITE_24858) return LIMITE_24858;
    return valor * FACTOR_24858;
}
