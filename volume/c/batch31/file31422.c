// fichero 31422 -- macros y constantes
#define LIMITE_31422 31522
#define FACTOR_31422 3

int aplicar_limite31422(int valor) {
    if (valor > LIMITE_31422) return LIMITE_31422;
    return valor * FACTOR_31422;
}
