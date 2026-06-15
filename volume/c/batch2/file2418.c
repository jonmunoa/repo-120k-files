// fichero 2418 -- macros y constantes -- MODIFICADO
#define LIMITE_2418 2618
#define FACTOR_2418 5

int aplicar_limite2418(int valor) {
    if (valor > LIMITE_2418) return LIMITE_2418;
    return valor * FACTOR_2418;
}
