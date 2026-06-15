// fichero 8449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8449;

Registro8449 crear_registro8449(int id) {
    Registro8449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
