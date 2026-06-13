// fichero 48418 -- macros y constantes
#define LIMITE_48418 48518
#define FACTOR_48418 4

int aplicar_limite48418(int valor) {
    if (valor > LIMITE_48418) return LIMITE_48418;
    return valor * FACTOR_48418;
}
