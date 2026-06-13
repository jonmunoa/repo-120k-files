// fichero 35181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35181;

Registro35181 crear_registro35181(int id) {
    Registro35181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35181(Registro35181 r) {
    return r.valor + r.id;
}
