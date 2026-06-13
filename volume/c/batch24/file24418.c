// fichero 24418 -- macros y constantes
#define LIMITE_24418 24518
#define FACTOR_24418 4

int aplicar_limite24418(int valor) {
    if (valor > LIMITE_24418) return LIMITE_24418;
    return valor * FACTOR_24418;
}
