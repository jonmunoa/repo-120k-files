// fichero 23809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23809;

Registro23809 crear_registro23809(int id) {
    Registro23809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
