// fichero 10206 -- macros y constantes -- MODIFICADO
#define LIMITE_10206 10406
#define FACTOR_10206 3

int aplicar_limite10206(int valor) {
    if (valor > LIMITE_10206) return LIMITE_10206;
    return valor * FACTOR_10206;
}
