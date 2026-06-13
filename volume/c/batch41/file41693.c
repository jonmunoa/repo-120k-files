// fichero 41693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41693;

Registro41693 crear_registro41693(int id) {
    Registro41693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41693(Registro41693 r) {
    return r.valor + r.id;
}
