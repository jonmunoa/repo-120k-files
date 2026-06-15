// fichero 32446 -- macros y constantes -- MODIFICADO
#define LIMITE_32446 32646
#define FACTOR_32446 3

int aplicar_limite32446(int valor) {
    if (valor > LIMITE_32446) return LIMITE_32446;
    return valor * FACTOR_32446;
}
