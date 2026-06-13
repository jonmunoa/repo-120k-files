// fichero 8169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8169;

Registro8169 crear_registro8169(int id) {
    Registro8169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8169(Registro8169 r) {
    return r.valor + r.id;
}
