// fichero 25138 -- macros y constantes -- MODIFICADO
#define LIMITE_25138 25338
#define FACTOR_25138 5

int aplicar_limite25138(int valor) {
    if (valor > LIMITE_25138) return LIMITE_25138;
    return valor * FACTOR_25138;
}
