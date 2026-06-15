// fichero 7418 -- macros y constantes -- MODIFICADO
#define LIMITE_7418 7618
#define FACTOR_7418 5

int aplicar_limite7418(int valor) {
    if (valor > LIMITE_7418) return LIMITE_7418;
    return valor * FACTOR_7418;
}
