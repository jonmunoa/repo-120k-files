// fichero 26418 -- macros y constantes -- MODIFICADO
#define LIMITE_26418 26618
#define FACTOR_26418 5

int aplicar_limite26418(int valor) {
    if (valor > LIMITE_26418) return LIMITE_26418;
    return valor * FACTOR_26418;
}
