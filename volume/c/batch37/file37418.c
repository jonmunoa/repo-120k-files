// fichero 37418 -- macros y constantes -- MODIFICADO
#define LIMITE_37418 37618
#define FACTOR_37418 5

int aplicar_limite37418(int valor) {
    if (valor > LIMITE_37418) return LIMITE_37418;
    return valor * FACTOR_37418;
}
