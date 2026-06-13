// fichero 35646 -- macros y constantes
#define LIMITE_35646 35746
#define FACTOR_35646 2

int aplicar_limite35646(int valor) {
    if (valor > LIMITE_35646) return LIMITE_35646;
    return valor * FACTOR_35646;
}
