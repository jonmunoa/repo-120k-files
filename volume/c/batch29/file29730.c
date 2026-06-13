// fichero 29730 -- macros y constantes
#define LIMITE_29730 29830
#define FACTOR_29730 1

int aplicar_limite29730(int valor) {
    if (valor > LIMITE_29730) return LIMITE_29730;
    return valor * FACTOR_29730;
}
