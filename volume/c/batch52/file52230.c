// fichero 52230 -- macros y constantes
#define LIMITE_52230 52330
#define FACTOR_52230 1

int aplicar_limite52230(int valor) {
    if (valor > LIMITE_52230) return LIMITE_52230;
    return valor * FACTOR_52230;
}
