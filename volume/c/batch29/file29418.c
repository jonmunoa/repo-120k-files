// fichero 29418 -- macros y constantes -- MODIFICADO
#define LIMITE_29418 29618
#define FACTOR_29418 5

int aplicar_limite29418(int valor) {
    if (valor > LIMITE_29418) return LIMITE_29418;
    return valor * FACTOR_29418;
}
