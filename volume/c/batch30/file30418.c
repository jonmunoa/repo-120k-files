// fichero 30418 -- macros y constantes -- MODIFICADO
#define LIMITE_30418 30618
#define FACTOR_30418 5

int aplicar_limite30418(int valor) {
    if (valor > LIMITE_30418) return LIMITE_30418;
    return valor * FACTOR_30418;
}
