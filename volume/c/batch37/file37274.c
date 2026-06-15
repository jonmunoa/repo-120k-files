// fichero 37274 -- macros y constantes -- MODIFICADO
#define LIMITE_37274 37474
#define FACTOR_37274 6

int aplicar_limite37274(int valor) {
    if (valor > LIMITE_37274) return LIMITE_37274;
    return valor * FACTOR_37274;
}
