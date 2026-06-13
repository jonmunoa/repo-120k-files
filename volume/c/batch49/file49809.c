// fichero 49809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49809;

Registro49809 crear_registro49809(int id) {
    Registro49809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49809(Registro49809 r) {
    return r.valor + r.id;
}
