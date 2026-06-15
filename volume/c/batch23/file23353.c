// fichero 23353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23353;

Registro23353 crear_registro23353(int id) {
    Registro23353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
