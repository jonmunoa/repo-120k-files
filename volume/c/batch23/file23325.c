// fichero 23325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23325;

Registro23325 crear_registro23325(int id) {
    Registro23325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
