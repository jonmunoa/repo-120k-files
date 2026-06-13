// fichero 8365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8365;

Registro8365 crear_registro8365(int id) {
    Registro8365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8365(Registro8365 r) {
    return r.valor + r.id;
}
