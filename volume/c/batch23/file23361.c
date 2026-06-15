// fichero 23361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23361;

Registro23361 crear_registro23361(int id) {
    Registro23361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
