// fichero 35778 -- macros y constantes -- MODIFICADO
#define LIMITE_35778 35978
#define FACTOR_35778 5

int aplicar_limite35778(int valor) {
    if (valor > LIMITE_35778) return LIMITE_35778;
    return valor * FACTOR_35778;
}
