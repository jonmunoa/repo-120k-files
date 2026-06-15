// fichero 23161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23161;

Registro23161 crear_registro23161(int id) {
    Registro23161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
