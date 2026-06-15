// fichero 37949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37949;

Registro37949 crear_registro37949(int id) {
    Registro37949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
