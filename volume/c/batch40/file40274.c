// fichero 40274 -- macros y constantes
#define LIMITE_40274 40374
#define FACTOR_40274 5

int aplicar_limite40274(int valor) {
    if (valor > LIMITE_40274) return LIMITE_40274;
    return valor * FACTOR_40274;
}
