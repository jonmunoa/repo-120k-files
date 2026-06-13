// fichero 29302 -- macros y constantes
#define LIMITE_29302 29402
#define FACTOR_29302 3

int aplicar_limite29302(int valor) {
    if (valor > LIMITE_29302) return LIMITE_29302;
    return valor * FACTOR_29302;
}
