// fichero 37010 -- macros y constantes -- MODIFICADO
#define LIMITE_37010 37210
#define FACTOR_37010 2

int aplicar_limite37010(int valor) {
    if (valor > LIMITE_37010) return LIMITE_37010;
    return valor * FACTOR_37010;
}
