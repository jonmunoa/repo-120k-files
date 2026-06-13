// fichero 13981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13981;

Registro13981 crear_registro13981(int id) {
    Registro13981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13981(Registro13981 r) {
    return r.valor + r.id;
}
