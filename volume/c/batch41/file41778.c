// fichero 41778 -- macros y constantes -- MODIFICADO
#define LIMITE_41778 41978
#define FACTOR_41778 5

int aplicar_limite41778(int valor) {
    if (valor > LIMITE_41778) return LIMITE_41778;
    return valor * FACTOR_41778;
}
