// fichero 23053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23053;

Registro23053 crear_registro23053(int id) {
    Registro23053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
