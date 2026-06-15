// fichero 20558 -- macros y constantes -- MODIFICADO
#define LIMITE_20558 20758
#define FACTOR_20558 5

int aplicar_limite20558(int valor) {
    if (valor > LIMITE_20558) return LIMITE_20558;
    return valor * FACTOR_20558;
}
