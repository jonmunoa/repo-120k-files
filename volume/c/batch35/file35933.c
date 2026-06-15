// fichero 35933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35933;

Registro35933 crear_registro35933(int id) {
    Registro35933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
