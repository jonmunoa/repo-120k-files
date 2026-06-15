// fichero 24290 -- macros y constantes -- MODIFICADO
#define LIMITE_24290 24490
#define FACTOR_24290 2

int aplicar_limite24290(int valor) {
    if (valor > LIMITE_24290) return LIMITE_24290;
    return valor * FACTOR_24290;
}
