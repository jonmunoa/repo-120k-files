// fichero 43650 -- macros y constantes -- MODIFICADO
#define LIMITE_43650 43850
#define FACTOR_43650 2

int aplicar_limite43650(int valor) {
    if (valor > LIMITE_43650) return LIMITE_43650;
    return valor * FACTOR_43650;
}
