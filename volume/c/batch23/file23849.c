// fichero 23849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23849;

Registro23849 crear_registro23849(int id) {
    Registro23849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
