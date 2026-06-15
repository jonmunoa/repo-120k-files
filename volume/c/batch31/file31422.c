// fichero 31422 -- macros y constantes -- MODIFICADO
#define LIMITE_31422 31622
#define FACTOR_31422 4

int aplicar_limite31422(int valor) {
    if (valor > LIMITE_31422) return LIMITE_31422;
    return valor * FACTOR_31422;
}
