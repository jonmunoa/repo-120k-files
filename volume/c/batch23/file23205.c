// fichero 23205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23205;

Registro23205 crear_registro23205(int id) {
    Registro23205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
