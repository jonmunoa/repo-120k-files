// fichero 24258 -- macros y constantes -- MODIFICADO
#define LIMITE_24258 24458
#define FACTOR_24258 5

int aplicar_limite24258(int valor) {
    if (valor > LIMITE_24258) return LIMITE_24258;
    return valor * FACTOR_24258;
}
