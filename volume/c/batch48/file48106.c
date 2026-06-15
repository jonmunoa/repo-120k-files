// fichero 48106 -- macros y constantes -- MODIFICADO
#define LIMITE_48106 48306
#define FACTOR_48106 3

int aplicar_limite48106(int valor) {
    if (valor > LIMITE_48106) return LIMITE_48106;
    return valor * FACTOR_48106;
}
