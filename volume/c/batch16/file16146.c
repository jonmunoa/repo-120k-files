// fichero 16146 -- macros y constantes
#define LIMITE_16146 16246
#define FACTOR_16146 2

int aplicar_limite16146(int valor) {
    if (valor > LIMITE_16146) return LIMITE_16146;
    return valor * FACTOR_16146;
}
