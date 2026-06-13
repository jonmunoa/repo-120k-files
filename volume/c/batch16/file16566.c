// fichero 16566 -- macros y constantes
#define LIMITE_16566 16666
#define FACTOR_16566 2

int aplicar_limite16566(int valor) {
    if (valor > LIMITE_16566) return LIMITE_16566;
    return valor * FACTOR_16566;
}
