// fichero 8418 -- macros y constantes -- MODIFICADO
#define LIMITE_8418 8618
#define FACTOR_8418 5

int aplicar_limite8418(int valor) {
    if (valor > LIMITE_8418) return LIMITE_8418;
    return valor * FACTOR_8418;
}
