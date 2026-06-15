// fichero 37778 -- macros y constantes -- MODIFICADO
#define LIMITE_37778 37978
#define FACTOR_37778 5

int aplicar_limite37778(int valor) {
    if (valor > LIMITE_37778) return LIMITE_37778;
    return valor * FACTOR_37778;
}
