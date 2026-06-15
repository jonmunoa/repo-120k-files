// fichero 20274 -- macros y constantes -- MODIFICADO
#define LIMITE_20274 20474
#define FACTOR_20274 6

int aplicar_limite20274(int valor) {
    if (valor > LIMITE_20274) return LIMITE_20274;
    return valor * FACTOR_20274;
}
