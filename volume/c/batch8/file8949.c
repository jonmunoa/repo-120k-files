// fichero 8949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8949;

Registro8949 crear_registro8949(int id) {
    Registro8949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
