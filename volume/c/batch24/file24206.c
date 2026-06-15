// fichero 24206 -- macros y constantes -- MODIFICADO
#define LIMITE_24206 24406
#define FACTOR_24206 3

int aplicar_limite24206(int valor) {
    if (valor > LIMITE_24206) return LIMITE_24206;
    return valor * FACTOR_24206;
}
