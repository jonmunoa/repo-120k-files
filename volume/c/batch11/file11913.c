// fichero 11913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11913;

Registro11913 crear_registro11913(int id) {
    Registro11913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11913(Registro11913 r) {
    return r.valor + r.id;
}
