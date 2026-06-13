// fichero 33418 -- macros y constantes
#define LIMITE_33418 33518
#define FACTOR_33418 4

int aplicar_limite33418(int valor) {
    if (valor > LIMITE_33418) return LIMITE_33418;
    return valor * FACTOR_33418;
}
