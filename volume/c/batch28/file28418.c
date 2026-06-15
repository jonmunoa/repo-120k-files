// fichero 28418 -- macros y constantes -- MODIFICADO
#define LIMITE_28418 28618
#define FACTOR_28418 5

int aplicar_limite28418(int valor) {
    if (valor > LIMITE_28418) return LIMITE_28418;
    return valor * FACTOR_28418;
}
