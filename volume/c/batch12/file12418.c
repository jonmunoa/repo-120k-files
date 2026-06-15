// fichero 12418 -- macros y constantes -- MODIFICADO
#define LIMITE_12418 12618
#define FACTOR_12418 5

int aplicar_limite12418(int valor) {
    if (valor > LIMITE_12418) return LIMITE_12418;
    return valor * FACTOR_12418;
}
