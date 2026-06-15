// fichero 23025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23025;

Registro23025 crear_registro23025(int id) {
    Registro23025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
