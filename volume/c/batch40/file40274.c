// fichero 40274 -- macros y constantes -- MODIFICADO
#define LIMITE_40274 40474
#define FACTOR_40274 6

int aplicar_limite40274(int valor) {
    if (valor > LIMITE_40274) return LIMITE_40274;
    return valor * FACTOR_40274;
}
