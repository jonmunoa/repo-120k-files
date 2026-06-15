// fichero 41534 -- macros y constantes -- MODIFICADO
#define LIMITE_41534 41734
#define FACTOR_41534 6

int aplicar_limite41534(int valor) {
    if (valor > LIMITE_41534) return LIMITE_41534;
    return valor * FACTOR_41534;
}
