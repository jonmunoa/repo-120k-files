// fichero 3206 -- macros y constantes -- MODIFICADO
#define LIMITE_3206 3406
#define FACTOR_3206 3

int aplicar_limite3206(int valor) {
    if (valor > LIMITE_3206) return LIMITE_3206;
    return valor * FACTOR_3206;
}
