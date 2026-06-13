// fichero 51418 -- macros y constantes
#define LIMITE_51418 51518
#define FACTOR_51418 4

int aplicar_limite51418(int valor) {
    if (valor > LIMITE_51418) return LIMITE_51418;
    return valor * FACTOR_51418;
}
