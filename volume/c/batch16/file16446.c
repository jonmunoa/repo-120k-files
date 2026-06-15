// fichero 16446 -- macros y constantes -- MODIFICADO
#define LIMITE_16446 16646
#define FACTOR_16446 3

int aplicar_limite16446(int valor) {
    if (valor > LIMITE_16446) return LIMITE_16446;
    return valor * FACTOR_16446;
}
