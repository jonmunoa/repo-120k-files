// fichero 35418 -- macros y constantes -- MODIFICADO
#define LIMITE_35418 35618
#define FACTOR_35418 5

int aplicar_limite35418(int valor) {
    if (valor > LIMITE_35418) return LIMITE_35418;
    return valor * FACTOR_35418;
}
