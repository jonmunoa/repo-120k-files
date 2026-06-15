// fichero 23645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23645;

Registro23645 crear_registro23645(int id) {
    Registro23645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
