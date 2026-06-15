// fichero 40174 -- macros y constantes -- MODIFICADO
#define LIMITE_40174 40374
#define FACTOR_40174 6

int aplicar_limite40174(int valor) {
    if (valor > LIMITE_40174) return LIMITE_40174;
    return valor * FACTOR_40174;
}
