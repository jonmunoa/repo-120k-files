// fichero 25418 -- macros y constantes
#define LIMITE_25418 25518
#define FACTOR_25418 4

int aplicar_limite25418(int valor) {
    if (valor > LIMITE_25418) return LIMITE_25418;
    return valor * FACTOR_25418;
}
