// fichero 48418 -- macros y constantes -- MODIFICADO
#define LIMITE_48418 48618
#define FACTOR_48418 5

int aplicar_limite48418(int valor) {
    if (valor > LIMITE_48418) return LIMITE_48418;
    return valor * FACTOR_48418;
}
