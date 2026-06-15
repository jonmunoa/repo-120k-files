// fichero 40329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40329;

Registro40329 crear_registro40329(int id) {
    Registro40329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
