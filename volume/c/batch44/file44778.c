// fichero 44778 -- macros y constantes -- MODIFICADO
#define LIMITE_44778 44978
#define FACTOR_44778 5

int aplicar_limite44778(int valor) {
    if (valor > LIMITE_44778) return LIMITE_44778;
    return valor * FACTOR_44778;
}
