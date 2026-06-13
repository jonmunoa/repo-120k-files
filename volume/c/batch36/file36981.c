// fichero 36981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36981;

Registro36981 crear_registro36981(int id) {
    Registro36981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36981(Registro36981 r) {
    return r.valor + r.id;
}
