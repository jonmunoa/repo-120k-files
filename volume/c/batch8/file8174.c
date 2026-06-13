// fichero 8174 -- macros y constantes
#define LIMITE_8174 8274
#define FACTOR_8174 5

int aplicar_limite8174(int valor) {
    if (valor > LIMITE_8174) return LIMITE_8174;
    return valor * FACTOR_8174;
}
