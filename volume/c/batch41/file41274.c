// fichero 41274 -- macros y constantes -- MODIFICADO
#define LIMITE_41274 41474
#define FACTOR_41274 6

int aplicar_limite41274(int valor) {
    if (valor > LIMITE_41274) return LIMITE_41274;
    return valor * FACTOR_41274;
}
