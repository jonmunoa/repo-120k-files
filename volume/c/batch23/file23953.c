// fichero 23953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23953;

Registro23953 crear_registro23953(int id) {
    Registro23953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
