// fichero 24778 -- macros y constantes -- MODIFICADO
#define LIMITE_24778 24978
#define FACTOR_24778 5

int aplicar_limite24778(int valor) {
    if (valor > LIMITE_24778) return LIMITE_24778;
    return valor * FACTOR_24778;
}
