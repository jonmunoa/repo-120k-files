// fichero 16146 -- macros y constantes -- MODIFICADO
#define LIMITE_16146 16346
#define FACTOR_16146 3

int aplicar_limite16146(int valor) {
    if (valor > LIMITE_16146) return LIMITE_16146;
    return valor * FACTOR_16146;
}
