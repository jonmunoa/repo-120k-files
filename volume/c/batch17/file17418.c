// fichero 17418 -- macros y constantes -- MODIFICADO
#define LIMITE_17418 17618
#define FACTOR_17418 5

int aplicar_limite17418(int valor) {
    if (valor > LIMITE_17418) return LIMITE_17418;
    return valor * FACTOR_17418;
}
