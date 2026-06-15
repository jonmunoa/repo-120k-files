// fichero 37002 -- macros y constantes -- MODIFICADO
#define LIMITE_37002 37202
#define FACTOR_37002 4

int aplicar_limite37002(int valor) {
    if (valor > LIMITE_37002) return LIMITE_37002;
    return valor * FACTOR_37002;
}
