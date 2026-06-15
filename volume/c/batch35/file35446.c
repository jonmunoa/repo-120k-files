// fichero 35446 -- macros y constantes -- MODIFICADO
#define LIMITE_35446 35646
#define FACTOR_35446 3

int aplicar_limite35446(int valor) {
    if (valor > LIMITE_35446) return LIMITE_35446;
    return valor * FACTOR_35446;
}
