// fichero 25981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25981;

Registro25981 crear_registro25981(int id) {
    Registro25981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25981(Registro25981 r) {
    return r.valor + r.id;
}
