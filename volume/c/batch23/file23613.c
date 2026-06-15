// fichero 23613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23613;

Registro23613 crear_registro23613(int id) {
    Registro23613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
