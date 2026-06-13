// fichero 24302 -- macros y constantes
#define LIMITE_24302 24402
#define FACTOR_24302 3

int aplicar_limite24302(int valor) {
    if (valor > LIMITE_24302) return LIMITE_24302;
    return valor * FACTOR_24302;
}
