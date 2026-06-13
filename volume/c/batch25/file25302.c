// fichero 25302 -- macros y constantes
#define LIMITE_25302 25402
#define FACTOR_25302 3

int aplicar_limite25302(int valor) {
    if (valor > LIMITE_25302) return LIMITE_25302;
    return valor * FACTOR_25302;
}
