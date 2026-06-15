// fichero 42082 -- macros y constantes -- MODIFICADO
#define LIMITE_42082 42282
#define FACTOR_42082 4

int aplicar_limite42082(int valor) {
    if (valor > LIMITE_42082) return LIMITE_42082;
    return valor * FACTOR_42082;
}
