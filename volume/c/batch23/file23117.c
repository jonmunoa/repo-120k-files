// fichero 23117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23117;

Registro23117 crear_registro23117(int id) {
    Registro23117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
