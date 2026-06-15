// fichero 16566 -- macros y constantes -- MODIFICADO
#define LIMITE_16566 16766
#define FACTOR_16566 3

int aplicar_limite16566(int valor) {
    if (valor > LIMITE_16566) return LIMITE_16566;
    return valor * FACTOR_16566;
}
