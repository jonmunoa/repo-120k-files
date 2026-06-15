// fichero 6433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6433;

Registro6433 crear_registro6433(int id) {
    Registro6433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
