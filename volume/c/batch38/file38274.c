// fichero 38274 -- macros y constantes -- MODIFICADO
#define LIMITE_38274 38474
#define FACTOR_38274 6

int aplicar_limite38274(int valor) {
    if (valor > LIMITE_38274) return LIMITE_38274;
    return valor * FACTOR_38274;
}
