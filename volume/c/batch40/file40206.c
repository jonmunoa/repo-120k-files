// fichero 40206 -- macros y constantes -- MODIFICADO
#define LIMITE_40206 40406
#define FACTOR_40206 3

int aplicar_limite40206(int valor) {
    if (valor > LIMITE_40206) return LIMITE_40206;
    return valor * FACTOR_40206;
}
