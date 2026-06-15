// fichero 25302 -- macros y constantes -- MODIFICADO
#define LIMITE_25302 25502
#define FACTOR_25302 4

int aplicar_limite25302(int valor) {
    if (valor > LIMITE_25302) return LIMITE_25302;
    return valor * FACTOR_25302;
}
