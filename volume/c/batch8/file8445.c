// fichero 8445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8445;

Registro8445 crear_registro8445(int id) {
    Registro8445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8445(Registro8445 r) {
    return r.valor + r.id;
}
