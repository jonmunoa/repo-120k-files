// fichero 19418 -- macros y constantes -- MODIFICADO
#define LIMITE_19418 19618
#define FACTOR_19418 5

int aplicar_limite19418(int valor) {
    if (valor > LIMITE_19418) return LIMITE_19418;
    return valor * FACTOR_19418;
}
