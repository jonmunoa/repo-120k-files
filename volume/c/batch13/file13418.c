// fichero 13418 -- macros y constantes -- MODIFICADO
#define LIMITE_13418 13618
#define FACTOR_13418 5

int aplicar_limite13418(int valor) {
    if (valor > LIMITE_13418) return LIMITE_13418;
    return valor * FACTOR_13418;
}
