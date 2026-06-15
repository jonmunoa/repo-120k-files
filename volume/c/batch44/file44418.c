// fichero 44418 -- macros y constantes -- MODIFICADO
#define LIMITE_44418 44618
#define FACTOR_44418 5

int aplicar_limite44418(int valor) {
    if (valor > LIMITE_44418) return LIMITE_44418;
    return valor * FACTOR_44418;
}
